#include "print.h"
#include <stdint.h>
#include <stddef.h>

// Include Jazz subsystem headers
#include "keyboard.h"
#include "timer.h"
#include "memory.h"
#include "util.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK); 
    print_str("Welcome to StarBloom OS\n");

    // Initialize keyboard
    keyboard_init();
    print_str("Keyboard initialized.\n");

    // Initialize timer
    timer_init();
    print_str("Timer initialized.\n");

    // Initialize memory manager
    memory_init();
    print_str("Memory management initialized.\n");

    // Utility function test (optional)
    print_str("All systems initialized and running.\n");
}
