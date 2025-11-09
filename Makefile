# Compiler
CC = gcc

# Directories
SRC_DIR = src
LIB_DIR = lib
BUILD_DIR = build

# Flags
CFLAGS = -Wall -Wextra -I$(LIB_DIR)

# Sources and targets
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
TARGET = main

# Default rule
all: $(BUILD_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean