#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = -538830236;
unsigned int var_7 = 675609620U;
int var_10 = 1764498937;
unsigned long long int var_11 = 8849539924647669891ULL;
unsigned char var_12 = (unsigned char)162;
long long int var_16 = -4504970508282600503LL;
int zero = 0;
unsigned short var_18 = (unsigned short)31339;
short var_19 = (short)23409;
unsigned long long int var_20 = 13481746694345795977ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
