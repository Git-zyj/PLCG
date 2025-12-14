#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)-8989;
long long int var_5 = 6017472709493780337LL;
signed char var_7 = (signed char)114;
signed char var_8 = (signed char)-116;
int zero = 0;
signed char var_10 = (signed char)38;
unsigned int var_11 = 3846335129U;
unsigned short var_12 = (unsigned short)22329;
unsigned char var_13 = (unsigned char)160;
short var_14 = (short)3426;
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
