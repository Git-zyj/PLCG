#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38995;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)9248;
unsigned char var_6 = (unsigned char)90;
unsigned long long int var_8 = 253424405510477454ULL;
unsigned short var_9 = (unsigned short)43348;
signed char var_10 = (signed char)32;
int var_12 = 1944863200;
unsigned long long int var_14 = 179621977090511604ULL;
long long int var_15 = -7441858686831056758LL;
int zero = 0;
long long int var_18 = -1442012072589338781LL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)30818;
_Bool var_21 = (_Bool)1;
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
