# Use an official C++ runtime as a parent image
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /app

# Copy the local project files to the container
COPY . /app

# Compile the program using the Makefile
RUN make

# Command to run the program
CMD ["make", "run"]
