#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)19;
short var_6 = (short)-31906;
unsigned long long int var_8 = 4088809579907517829ULL;
int zero = 0;
unsigned long long int var_12 = 13899628042552462107ULL;
unsigned long long int var_13 = 7824791453459540568ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17237691794825705422ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
