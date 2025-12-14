#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24988;
int var_3 = 716374913;
int var_4 = -1126352513;
int var_5 = -1440664078;
short var_8 = (short)-32214;
short var_9 = (short)30077;
int var_12 = 1569455391;
int zero = 0;
int var_16 = 1147662335;
short var_17 = (short)14085;
short var_18 = (short)25974;
int var_19 = -879094762;
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
