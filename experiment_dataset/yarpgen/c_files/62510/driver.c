#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2270229487271026949ULL;
unsigned char var_6 = (unsigned char)72;
unsigned long long int var_11 = 9741045708034068984ULL;
int var_13 = 538293347;
int var_15 = 1271107933;
int zero = 0;
signed char var_19 = (signed char)88;
signed char var_20 = (signed char)-63;
int var_21 = 475197475;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
