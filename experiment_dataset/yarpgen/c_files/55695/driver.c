#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 540662752;
int var_5 = -366038888;
int var_7 = 794505206;
unsigned int var_10 = 1332863672U;
unsigned int var_11 = 3491448891U;
unsigned int var_14 = 1021710U;
int zero = 0;
int var_19 = -691546454;
unsigned int var_20 = 1115679990U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
