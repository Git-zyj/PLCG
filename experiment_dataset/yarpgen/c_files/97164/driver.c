#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16435057840280605883ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1821156088U;
unsigned int var_11 = 3009904629U;
unsigned long long int var_12 = 2767855581542129130ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)7617;
unsigned char var_18 = (unsigned char)161;
_Bool var_19 = (_Bool)0;
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
