#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7717776352536188468ULL;
int var_5 = -803355496;
unsigned char var_9 = (unsigned char)81;
unsigned int var_10 = 2210513440U;
unsigned int var_11 = 77194729U;
int zero = 0;
unsigned char var_12 = (unsigned char)81;
unsigned char var_13 = (unsigned char)254;
unsigned int var_14 = 3992753994U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
