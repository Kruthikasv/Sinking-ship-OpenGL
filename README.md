# Sinking Ship OpenGL

## Overview

The Sinking Ship OpenGL project is a computer graphics application that simulates a virtual sailing ship on moving waves with dynamic effects like lightning. Developed using OpenGL, this project showcases various graphical techniques such as rendering, texture mapping, special effects, and geometrical transformations like translation, rotation, and scaling.

## Features

- **Realistic Wave Simulation**: Dynamic waves that create a realistic ocean environment.
- **Ship Animation**: A sailing ship that interacts with the waves.
- **Lightning Effects**: Simulated lightning to enhance the visual experience.
- **Texture Mapping**: Realistic textures applied to the ship and ocean.
- **Geometrical Transformations**: Smooth animations using translation, rotation, and scaling.

## Technologies Used

- **Graphics Library**: OpenGL
- **Programming Language**: C/C++
- **Development Environment**: Any IDE or text editor supporting C/C++ and OpenGL

## Installation

### Prerequisites

- OpenGL and GLUT (OpenGL Utility Toolkit)
- C/C++ Compiler (e.g., GCC, Clang)
- Development environment (e.g., Visual Studio, Code::Blocks)

### Steps

1. **Clone the Repository**
   ```bash
   git clone https://github.com/Kruthikasv/Sinking-ship-OpenGL.git
   ```

2. **Set Up the Development Environment**
   - Ensure OpenGL and GLUT are installed and properly configured in your development environment.
   - Include the necessary OpenGL headers and link against the OpenGL libraries.

3. **Compile the Code**
   - Open the project in your preferred development environment or use a command-line compiler.
   - Compile the source code. For example, using GCC:
     ```bash
     g++ -o sinking_ship main.cpp -lGL -lGLU -lglut
     ```

4. **Run the Application**
   - Execute the compiled binary.
     ```bash
     ./sinking_ship
     ```

## Usage

### Controls

- **Start Animation**: Run the application to start the ship and wave simulation.
- **Interact with the Scene**: Use keyboard or mouse inputs (if implemented) to interact with the simulation.

### Customization

- **Modify Parameters**: Change wave properties, ship speed, or lightning frequency by adjusting parameters in the source code.
- **Extend Features**: Add new graphical effects or enhance existing ones by modifying the OpenGL code.

## Code Structure

- **main.cpp**: Main file containing the initialization and rendering logic.
- **wave.cpp**: Functions related to wave simulation.
- **ship.cpp**: Functions for rendering and animating the ship.
- **lightning.cpp**: Functions for simulating lightning effects.
- **textures/**: Directory containing texture files for the ship and ocean.

## Contributions

Contributions to the project are welcome. Please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -am 'Add your feature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Create a new Pull Request.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

## Contact

For any inquiries or support, please contact:

- **Name**: Kruthika Vasisht
- **Email**: kruthikasvasisht@gmail.com
