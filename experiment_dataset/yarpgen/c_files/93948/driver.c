#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
unsigned int var_3 = 337872845U;
unsigned int var_5 = 3401954029U;
unsigned short var_6 = (unsigned short)44263;
short var_7 = (short)-27921;
unsigned short var_8 = (unsigned short)22760;
unsigned short var_9 = (unsigned short)39593;
signed char var_10 = (signed char)89;
unsigned short var_11 = (unsigned short)22627;
unsigned char var_12 = (unsigned char)236;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)86;
int var_17 = -1114955665;
signed char var_18 = (signed char)117;
signed char var_19 = (signed char)104;
void init() {
}

void checksum() {
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
