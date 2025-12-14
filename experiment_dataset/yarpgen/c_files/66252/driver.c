#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
signed char var_3 = (signed char)-22;
long long int var_11 = 9110487866659396128LL;
int zero = 0;
int var_18 = -718475758;
unsigned int var_19 = 3510598081U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
