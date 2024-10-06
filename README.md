# DataBridgePro

DataBridgePro is a C++ project designed to convert binary data produced by legacy systems into JSON format, allowing for interaction with modern APIs.

## Build and Run

### Prerequisites
- CMake (version 3.10+)
- RapidJSON library (cloned into the `rapidjson/` folder)

### Steps to Build

1. Clone the RapidJSON library:
    ```bash
    git clone https://github.com/Tencent/rapidjson.git
    ```
2. Build the project:
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

3. Run the executable:
    ```bash
    ./DataBridgePro
    ```

### Test Data
The project uses a test binary file located at `test/test_data.bin`. Make sure this file exists before running the program. You can create it using:
```bash
echo -n -e '\x41\x42\x43\x44' > test/test_data.bin


### 4. Build and Run the Project
Make sure your `test_data.bin` file is properly created as explained in step 2. After creating the binary test data:

1. **Clean and rebuild the project**:
   In CLion, go to **Build > Clean** and then **Build > Rebuild Project**.

2. **Run the project**:
   In CLion, run the project and it should parse the binary data and output it as JSON.

After these updates, your project should be ready for testing! Let me know if any further issues arise during testing.
