#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned long long int var_3 = 7901914866518938430ULL;
unsigned int var_4 = 3953730591U;
_Bool var_6 = (_Bool)1;
long long int var_8 = 6867799298491414632LL;
unsigned long long int var_9 = 3866526973927307641ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4521601244326339203ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
