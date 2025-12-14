#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 84799372012341403ULL;
long long int var_3 = 7235980391366899881LL;
unsigned int var_5 = 3749734364U;
int var_7 = 1218420121;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)45;
unsigned int var_13 = 3043386491U;
long long int var_14 = 8729478329687821828LL;
signed char var_15 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
