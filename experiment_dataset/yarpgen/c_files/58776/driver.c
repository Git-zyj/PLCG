#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7182;
short var_3 = (short)29927;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)41946;
unsigned long long int var_7 = 6004733802800138229ULL;
unsigned int var_8 = 1519498365U;
short var_10 = (short)-7657;
int zero = 0;
long long int var_11 = -7531385037830349008LL;
signed char var_12 = (signed char)-37;
void init() {
}

void checksum() {
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
