#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned long long int var_1 = 11869610306293747420ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8766742893347332325LL;
unsigned long long int var_12 = 11592738421963434972ULL;
unsigned short var_13 = (unsigned short)39632;
signed char var_14 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
