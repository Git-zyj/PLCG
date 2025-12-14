#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1187762800;
short var_2 = (short)-32538;
unsigned int var_3 = 3859295782U;
int var_6 = 1169736463;
_Bool var_8 = (_Bool)0;
long long int var_10 = 8816967074854734016LL;
int zero = 0;
signed char var_13 = (signed char)-3;
short var_14 = (short)32619;
void init() {
}

void checksum() {
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
