#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
unsigned short var_5 = (unsigned short)22741;
long long int var_6 = 4146865268001319748LL;
signed char var_7 = (signed char)64;
unsigned int var_8 = 288100975U;
long long int var_9 = 6610139110007947026LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1421046749U;
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
