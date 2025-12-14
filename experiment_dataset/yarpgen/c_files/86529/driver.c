#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8544756068232843489ULL;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)34;
int zero = 0;
unsigned long long int var_12 = 1504569131216173940ULL;
long long int var_13 = -5883667410303192821LL;
long long int var_14 = -363059749243739953LL;
unsigned int var_15 = 117938431U;
unsigned long long int var_16 = 17215829046826795849ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
