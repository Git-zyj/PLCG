#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8623809911531855227ULL;
unsigned short var_5 = (unsigned short)9277;
unsigned long long int var_11 = 8886682374826869312ULL;
unsigned char var_12 = (unsigned char)251;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
unsigned short var_16 = (unsigned short)10941;
unsigned short var_17 = (unsigned short)56829;
unsigned short var_18 = (unsigned short)52950;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
