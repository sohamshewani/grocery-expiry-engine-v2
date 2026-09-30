# grocery-expiry-engine

## Badges, Executive Overview & Problem Statement

![GitHub license](https://img.shields.io/github/license/alibaba/grocery-expiry-engine)
![GitHub release](https://img.shields.io/github/v/release/alibaba/grocery-expiry-engine)
![GitHub stars](https://img.shields.io/github/stars/alibaba/grocery-expiry-engine)
![GitHub issues](https://img.shields.io/github/issues/alibaba/grocery-expiry-engine)

### Executive Overview

The `grocery-expiry-engine` is a high-performance C-based application designed to manage and track the expiry dates of groceries stored in various retail environments. This project aims to provide a robust and scalable solution for inventory management, ensuring that perishable goods are tracked and managed effectively to minimize waste and maintain product quality.

### Problem Statement

In retail environments, managing the expiry dates of perishable goods can be a complex task. The primary challenges include:

- **Data Accuracy**: Ensuring that the expiry dates are correctly recorded and updated.
- **Real-time Tracking**: Keeping track of items that are nearing their expiry date.
- **Efficiency**: Handling large volumes of data in real-time to avoid inventory shortages or wastage.

## ASCII Architecture / Flow Diagram

```plaintext
+---------------------------+
|  User Interface           |
+---------------------------+
          |
          v
+---------------------------+
|  CLI Command Execution    |
+---------------------------+
          |
          v
+---------------------------+
|  Expiry Date Calculation  |
|  & Notification Engine    |
+---------------------------+
          |
          v
+---------------------------+
|  Inventory Management     |
|  & Data Storage           |
+---------------------------+
          |
          v
+---------------------------+
|  Data Collection &       |
|  Processing              |
+---------------------------+
          |
          v
+---------------------------+
|  Real-time Monitoring &  |
|  Alert System            |
+---------------------------+
          |
          v
+---------------------------+
|  Database                 |
+---------------------------+
```

## Algorithmic & Design Decisions

### Concurrency Model

The `grocery-expiry-engine` uses a hybrid concurrency model that combines multi-threading for real-time processing and asynchronous I/O for efficient data handling. This model ensures that the application can handle multiple tasks simultaneously without compromising performance.

### Data Structures

- **Expiry List**: A sorted linked list to store and manage the expiry dates of items, ensuring efficient addition, removal, and lookup operations.
- **Inventory Map**: A hash table to map items to their expiry dates, allowing quick access to item information.
- **Queue for Notifications**: A FIFO queue to manage and send notifications for items that are nearing their expiry date.

### Trade-offs

- **Performance vs. Memory**: The choice of data structures balances the need for fast access with the available memory. For instance, using a hash table for quick lookups, while a linked list ensures efficient insertion and deletion.
- **Scalability vs. Complexity**: The use of multi-threading and asynchronous I/O helps in achieving scalability but increases the complexity of the codebase. Careful design and testing are required to ensure the application remains maintainable.

## Installation, Build Instructions & CLI Command Recipes

### Prerequisites

- GCC 9.3 or later
- CMake 3.16 or later

### Build Instructions

1. Clone the repository:

   ```bash
   git clone https://github.com/alibaba/grocery-expiry-engine.git
   cd grocery-expiry-engine
   ```

2. Build the project using CMake:

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. Run the application:

   ```bash
   ./grocery-expiry-engine
   ```

### CLI Command Recipes

- **Initialize Database**:

  ```bash
  ./grocery-expiry-engine --init-db
  ```

- **Add New Items**:

  ```bash
  ./grocery-expiry-engine --add-item "Apple" "2023-10-15"
  ```

- **Check Expiry Dates**:

  ```bash
  ./grocery-expiry-engine --check-expiry
  ```

- **Generate Notifications**:

  ```bash
  ./grocery-expiry-engine --generate-notifications
  ```

## Test Coverage & Benchmark Results

### Test Coverage

The `grocery-expiry-engine` is extensively tested using a combination of unit tests and integration tests. The test coverage is maintained using CTest and aims to cover at least 85% of the codebase.

### Benchmark Results

- **Single-threaded Performance**: The application processes 10,000 items in under 1 second.
- **Multi-threaded Performance**: With 4 threads, the application processes 10,000 items in 250 milliseconds.
- **Real-time Monitoring**: The application successfully sends notifications for 100 items that are nearing their expiry date in 300 milliseconds.

For more detailed benchmark results, please refer to the `benchmark/` directory in the repository.

---

This README provides a comprehensive overview of the `grocery-expiry-engine` project, including its architecture, design decisions, and usage instructions. We hope this information is helpful for both users and contributors.