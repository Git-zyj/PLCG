#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8610580044876587165LL;
unsigned int var_1 = 362079526U;
signed char var_2 = (signed char)-50;
unsigned int var_3 = 1447848145U;
unsigned int var_4 = 2771231836U;
long long int var_5 = 8379613587304519635LL;
unsigned short var_8 = (unsigned short)53099;
int var_9 = -165350261;
short var_10 = (short)18097;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = -2007654683;
int var_14 = 456264689;
unsigned int var_15 = 4211251768U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
