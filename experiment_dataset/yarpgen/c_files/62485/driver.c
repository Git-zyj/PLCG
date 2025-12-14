#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned int var_1 = 433515621U;
unsigned long long int var_3 = 12665383267741656573ULL;
unsigned long long int var_5 = 13947764449240894744ULL;
unsigned int var_8 = 662098365U;
unsigned int var_9 = 3336811776U;
signed char var_10 = (signed char)30;
int zero = 0;
signed char var_15 = (signed char)127;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17019731936016042709ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
