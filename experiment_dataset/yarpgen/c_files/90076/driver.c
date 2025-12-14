#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)207;
unsigned long long int var_7 = 10966284419364869791ULL;
unsigned long long int var_8 = 1140523119872867759ULL;
unsigned long long int var_9 = 211614036370465214ULL;
unsigned long long int var_12 = 6889312465290629364ULL;
long long int var_15 = 4793460048515347457LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1437731637;
unsigned short var_21 = (unsigned short)30767;
signed char var_22 = (signed char)8;
void init() {
}

void checksum() {
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
