#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
long long int var_3 = 5647941152129478608LL;
long long int var_6 = -4145393771143242706LL;
long long int var_8 = -3355826691390048645LL;
long long int var_9 = -6340854294441903256LL;
unsigned char var_14 = (unsigned char)12;
signed char var_17 = (signed char)77;
int zero = 0;
long long int var_18 = 4000688511467088729LL;
unsigned int var_19 = 1904934557U;
unsigned int var_20 = 1536938910U;
unsigned char var_21 = (unsigned char)32;
signed char var_22 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
