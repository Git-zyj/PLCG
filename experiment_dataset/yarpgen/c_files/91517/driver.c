#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2582606645U;
signed char var_8 = (signed char)113;
unsigned int var_9 = 2826471961U;
unsigned short var_11 = (unsigned short)28519;
int zero = 0;
unsigned short var_14 = (unsigned short)47430;
int var_15 = 1078394266;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
