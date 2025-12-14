#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5641;
signed char var_4 = (signed char)89;
long long int var_5 = 1104252472876165731LL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)104;
unsigned int var_14 = 3405526757U;
int zero = 0;
unsigned int var_16 = 2862318674U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)42505;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
