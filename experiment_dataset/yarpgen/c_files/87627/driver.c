#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1152816653166332110LL;
int var_5 = -136981024;
unsigned int var_8 = 2511634967U;
int var_9 = -2048611725;
short var_10 = (short)22034;
int zero = 0;
long long int var_13 = 208486285504910619LL;
unsigned char var_14 = (unsigned char)103;
signed char var_15 = (signed char)-122;
unsigned char var_16 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
