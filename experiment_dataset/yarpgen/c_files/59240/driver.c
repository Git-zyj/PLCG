#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29842;
signed char var_2 = (signed char)65;
unsigned int var_4 = 3243387819U;
unsigned char var_7 = (unsigned char)124;
unsigned char var_10 = (unsigned char)4;
short var_12 = (short)24711;
unsigned int var_15 = 3492312616U;
int var_16 = -412895414;
int zero = 0;
short var_18 = (short)-14030;
int var_19 = -1365311950;
_Bool var_20 = (_Bool)1;
long long int var_21 = -6426176677397684748LL;
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
