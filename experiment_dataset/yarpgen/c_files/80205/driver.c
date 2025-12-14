#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -760486941;
unsigned int var_4 = 2644891025U;
short var_5 = (short)31795;
unsigned int var_7 = 3634910688U;
short var_8 = (short)12959;
int zero = 0;
unsigned int var_10 = 3338265354U;
int var_11 = 428117652;
unsigned int var_12 = 169398463U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
