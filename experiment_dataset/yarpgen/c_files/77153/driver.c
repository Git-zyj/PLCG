#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 510055640054352719ULL;
long long int var_1 = 5803325035632599015LL;
unsigned long long int var_4 = 4820275798772941815ULL;
unsigned char var_9 = (unsigned char)69;
unsigned char var_12 = (unsigned char)95;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 3810770885U;
unsigned char var_16 = (unsigned char)91;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
