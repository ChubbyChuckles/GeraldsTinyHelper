# GeraldsTinyHelper

A professional C11 development setup for building robust and efficient C applications.

## Description

GeraldsTinyHelper is a template repository designed to provide a solid foundation for C11 projects. It incorporates modern development practices, tooling, and best practices to ensure high-quality, maintainable code.

## Features

- **C11 Standard**: Utilizes the latest C standard for modern language features
- **CMake Build System**: Cross-platform build configuration
- **Comprehensive Tooling**: Includes static analysis, testing, and documentation tools
- **Security Hardening**: Built-in security features and best practices
- **Multi-platform Support**: Works on Linux, Windows, and macOS

## Project Structure

```
.
├── src/                 # Main source code
├── include/             # Header files
├── lib/                 # Static/dynamic libraries
├── tests/               # Unit and integration tests
├── docs/                # Documentation
├── scripts/             # Build and utility scripts
├── build/               # Compiled artifacts (gitignored)
├── extern/              # External dependencies
├── examples/            # Usage examples
└── benchmarks/          # Performance testing
```

## Requirements

- C11 compatible compiler (GCC 5+, Clang 3.4+, MSVC 2015+)
- CMake 3.10+
- Git

## Setup Instructions

1. **Clone the repository**
   ```bash
   git clone https://github.com/ChubbyChuckles/GeraldsTinyHelper.git
   cd GeraldsTinyHelper
   ```

2. **Create build directory**
   ```bash
   mkdir build
   cd build
   ```

3. **Configure with CMake**
   ```bash
   cmake ..
   ```

4. **Build the project**
   ```bash
   make
   ```

5. **Run tests** (if available)
   ```bash
   make test
   ```

## Development

### Code Style

This project follows consistent C coding standards. Use the provided clang-format configuration for code formatting.

### Static Analysis

Run static analysis tools:
```bash
# Using clang-tidy
clang-tidy src/*.c -- -Iinclude

# Using cppcheck
cppcheck --enable=all --std=c11 src/
```

### Testing

Add unit tests in the `tests/` directory. Use the configured testing framework.

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Add tests
5. Submit a pull request

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Contact

For questions or support, please open an issue on GitHub.

---

**Last Updated**: September 4, 2025