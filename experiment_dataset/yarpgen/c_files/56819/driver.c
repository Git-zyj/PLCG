#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51824;
unsigned int var_2 = 1745821724U;
signed char var_3 = (signed char)-109;
unsigned int var_4 = 1348483966U;
unsigned short var_8 = (unsigned short)31433;
int zero = 0;
int var_10 = 1426970040;
unsigned long long int var_11 = 13739575054166364366ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
