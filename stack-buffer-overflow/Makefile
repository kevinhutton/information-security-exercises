CC = gcc
CFLAGS = -g -fno-stack-protector 
TARGET = stack-buffer-overflow

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
clean:
	$(RM) $(TARGET)
