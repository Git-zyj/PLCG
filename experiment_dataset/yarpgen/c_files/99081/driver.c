#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)47235;
signed char var_5 = (signed char)-108;
unsigned long long int var_7 = 1208268782501562827ULL;
long long int var_9 = 8779041604403929377LL;
unsigned short var_13 = (unsigned short)33336;
int zero = 0;
int var_15 = -1153698140;
long long int var_16 = -6823737655739257918LL;
unsigned short var_17 = (unsigned short)5543;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
