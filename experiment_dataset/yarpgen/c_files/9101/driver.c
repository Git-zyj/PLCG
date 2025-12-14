#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 663198090244604833ULL;
unsigned int var_2 = 4179629654U;
signed char var_4 = (signed char)42;
int var_5 = -446102521;
int var_6 = -1224207531;
int zero = 0;
signed char var_13 = (signed char)-58;
signed char var_14 = (signed char)-118;
short var_15 = (short)25225;
short var_16 = (short)-32259;
unsigned int var_17 = 2289658674U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
