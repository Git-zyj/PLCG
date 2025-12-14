#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 260582646459062362LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-15;
int var_6 = -1052761613;
int var_7 = -788150485;
signed char var_8 = (signed char)113;
unsigned int var_10 = 353054437U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)25194;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)61307;
signed char var_17 = (signed char)41;
unsigned char var_18 = (unsigned char)135;
unsigned long long int var_19 = 15909863304867635883ULL;
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
