#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15198030897548184642ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1650388328U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)40537;
int zero = 0;
unsigned char var_19 = (unsigned char)75;
int var_20 = 1460161419;
long long int var_21 = -2810539553642002996LL;
int var_22 = -974771281;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
