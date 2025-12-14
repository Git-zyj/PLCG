#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)63;
unsigned char var_6 = (unsigned char)130;
unsigned char var_9 = (unsigned char)193;
unsigned char var_14 = (unsigned char)53;
int var_15 = -1196687846;
unsigned char var_16 = (unsigned char)154;
int var_17 = -8495721;
int zero = 0;
unsigned char var_20 = (unsigned char)105;
unsigned char var_21 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
