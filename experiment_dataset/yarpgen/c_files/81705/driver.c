#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned short var_2 = (unsigned short)57698;
unsigned char var_3 = (unsigned char)222;
int var_4 = -1720154105;
long long int var_8 = 3092978668768766417LL;
int zero = 0;
unsigned char var_10 = (unsigned char)198;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
