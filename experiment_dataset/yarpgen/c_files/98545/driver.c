#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)112;
unsigned long long int var_5 = 10864434977958679224ULL;
short var_8 = (short)-6906;
signed char var_12 = (signed char)-101;
unsigned int var_13 = 41695588U;
int zero = 0;
int var_16 = 751149861;
unsigned short var_17 = (unsigned short)34197;
short var_18 = (short)-12344;
signed char var_19 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
