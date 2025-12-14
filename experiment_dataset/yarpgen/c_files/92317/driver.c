#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)32446;
unsigned short var_6 = (unsigned short)58316;
unsigned long long int var_7 = 8861334673228585484ULL;
short var_8 = (short)-2797;
unsigned long long int var_11 = 14075026922505737437ULL;
short var_14 = (short)-13219;
int zero = 0;
unsigned int var_19 = 2314821856U;
short var_20 = (short)21473;
unsigned int var_21 = 2210744517U;
short var_22 = (short)32380;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
