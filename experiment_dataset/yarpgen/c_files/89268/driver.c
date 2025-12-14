#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4772542515001970597ULL;
int var_7 = 2031914564;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)22;
unsigned short var_12 = (unsigned short)17677;
int var_13 = 1088048286;
unsigned short var_15 = (unsigned short)11190;
int zero = 0;
unsigned int var_17 = 369372526U;
long long int var_18 = -6642235510529270028LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
