#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61027;
signed char var_7 = (signed char)-48;
unsigned long long int var_10 = 17863453183762842166ULL;
int var_11 = 1043118113;
unsigned short var_12 = (unsigned short)38210;
int zero = 0;
long long int var_14 = -654834030422026266LL;
unsigned char var_15 = (unsigned char)44;
unsigned short var_16 = (unsigned short)41135;
_Bool var_17 = (_Bool)0;
short var_18 = (short)21224;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
