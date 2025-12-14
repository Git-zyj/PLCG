#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
signed char var_5 = (signed char)-86;
int var_7 = -2056151968;
unsigned char var_10 = (unsigned char)44;
signed char var_12 = (signed char)98;
short var_14 = (short)-32591;
int zero = 0;
int var_19 = -1242915992;
int var_20 = -2110221947;
signed char var_21 = (signed char)101;
int var_22 = 163379641;
unsigned long long int var_23 = 9006959105140090797ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
