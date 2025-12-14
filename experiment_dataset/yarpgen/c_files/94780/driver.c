#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3498453531U;
signed char var_4 = (signed char)-118;
unsigned char var_8 = (unsigned char)109;
unsigned char var_9 = (unsigned char)41;
unsigned char var_10 = (unsigned char)167;
int zero = 0;
unsigned char var_11 = (unsigned char)81;
int var_12 = 757355741;
unsigned int var_13 = 1318913258U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
