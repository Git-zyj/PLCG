#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-48;
_Bool var_10 = (_Bool)0;
long long int var_11 = -3143502955271710613LL;
unsigned int var_13 = 4143150780U;
_Bool var_14 = (_Bool)1;
long long int var_18 = 6321005450408256321LL;
int zero = 0;
long long int var_19 = -8361754292038117768LL;
unsigned short var_20 = (unsigned short)56752;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
