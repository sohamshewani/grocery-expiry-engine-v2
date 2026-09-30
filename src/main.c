int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <command>\n", argv[0]);
        return 1;
    }
    const char *command = argv[1];
    if (strcmp(command, "--test-unit") == 0) {
        printf("Running unit tests...\n");
        // Unit test commands
        return 0;
    } else if (strcmp(command, "--test-integration") == 0) {
        printf("Running integration tests...\n");
        // Integration test commands
        return 0;
    } else {
        printf("Unknown command: %s\n", command);
        return 1;
    }
}
