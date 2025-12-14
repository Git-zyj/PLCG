#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 4128468597338374835ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 8810795289866020676ULL;
long long int var_11 = -5249373228084641515LL;
int zero = 0;
signed char var_12 = (signed char)44;
unsigned long long int var_13 = 17755150272855785193ULL;
unsigned char var_14 = (unsigned char)173;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4521555746638107716ULL;
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
