#include "types.h"
#include "stat.h"
#include "user.h"

// Helper function to convert string to long long
long long str_to_ll(const char *str) {
    long long result = 0;
    while (*str) {
        result = result * 10 + (*str - '0');  // Convert char to digit and accumulate
        str++;
    }
    return result;
}

int str_to_int(const char *str) {
    int result = 0;
    while (*str) {
        result = result * 10 + (*str - '0');  // Convert char to digit and accumulate
        str++;
    }
    return result;
}

int main(int argc, char *argv[]) 
{ 
    if (argc < 2) {
        printf(1, "Usage: %s <number>\n", argv[0]);
        exit();
    }

    int limit = str_to_int(argv[1]);
    long long n = str_to_ll(argv[2]);


    set_limit(limit);
    for (long long i = 0; i < n; i++) {
        printf(1, "testing...\n");  // Use %lld for long long values
    }

    exit(); 
}
