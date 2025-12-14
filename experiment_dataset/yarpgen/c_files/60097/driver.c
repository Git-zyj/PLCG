#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11982054668675311641ULL;
unsigned long long int var_1 = 13560949725193192595ULL;
signed char var_7 = (signed char)-80;
unsigned int var_10 = 2670129299U;
unsigned int var_11 = 2294914083U;
int zero = 0;
unsigned char var_12 = (unsigned char)91;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10752632293592181238ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
