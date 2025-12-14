#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3976525752764026897ULL;
int var_3 = -1285130486;
unsigned char var_6 = (unsigned char)144;
signed char var_9 = (signed char)-55;
long long int var_10 = 6395759396296270102LL;
long long int var_11 = 1363693798050271248LL;
short var_13 = (short)15681;
unsigned char var_14 = (unsigned char)108;
long long int var_16 = 583625096229815378LL;
int zero = 0;
unsigned char var_17 = (unsigned char)157;
short var_18 = (short)4081;
unsigned char var_19 = (unsigned char)92;
void init() {
}

void checksum() {
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
