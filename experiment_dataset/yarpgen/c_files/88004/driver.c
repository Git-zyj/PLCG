#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27477;
short var_4 = (short)4131;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-109;
unsigned char var_9 = (unsigned char)26;
unsigned short var_12 = (unsigned short)49863;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)17287;
long long int var_17 = 6738159064671994608LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 9902959996312001328ULL;
unsigned int var_20 = 561902271U;
short var_21 = (short)2086;
void init() {
}

void checksum() {
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
