#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 660515681U;
short var_1 = (short)-13640;
int var_2 = -760320765;
long long int var_3 = -9196600674587922878LL;
unsigned int var_4 = 1215146274U;
signed char var_7 = (signed char)-11;
signed char var_10 = (signed char)120;
int zero = 0;
unsigned short var_12 = (unsigned short)46451;
long long int var_13 = -6795800395644619413LL;
short var_14 = (short)17822;
unsigned long long int var_15 = 15528773065495391550ULL;
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
