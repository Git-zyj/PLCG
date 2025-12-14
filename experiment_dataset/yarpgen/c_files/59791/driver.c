#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
unsigned long long int var_5 = 9745568506334056354ULL;
unsigned short var_9 = (unsigned short)11195;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)12395;
signed char var_17 = (signed char)-73;
signed char var_18 = (signed char)105;
int var_19 = 1662026828;
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
