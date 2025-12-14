#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13784153058465160288ULL;
short var_5 = (short)18179;
unsigned long long int var_9 = 6924886630597575605ULL;
unsigned char var_15 = (unsigned char)118;
short var_16 = (short)-11554;
unsigned short var_18 = (unsigned short)22212;
int zero = 0;
long long int var_20 = -3131943998284435259LL;
int var_21 = 653304817;
int var_22 = 369196568;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
