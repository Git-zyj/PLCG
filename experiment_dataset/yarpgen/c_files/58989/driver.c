#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1230284800;
short var_3 = (short)-7336;
unsigned short var_4 = (unsigned short)9352;
unsigned short var_6 = (unsigned short)4140;
unsigned short var_7 = (unsigned short)51718;
unsigned short var_9 = (unsigned short)26797;
int zero = 0;
short var_11 = (short)-12016;
unsigned short var_12 = (unsigned short)16782;
int var_13 = 695469908;
short var_14 = (short)-9203;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
