#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10721;
short var_3 = (short)28059;
unsigned int var_5 = 1022229060U;
long long int var_6 = -7229968271627560059LL;
long long int var_8 = -8751581251164883984LL;
unsigned short var_13 = (unsigned short)9322;
long long int var_17 = 7956759775408043161LL;
int zero = 0;
short var_18 = (short)31196;
short var_19 = (short)6298;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
