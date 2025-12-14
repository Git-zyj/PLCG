#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39237;
_Bool var_2 = (_Bool)0;
int var_3 = -184316339;
signed char var_4 = (signed char)-53;
short var_5 = (short)32189;
unsigned short var_6 = (unsigned short)33945;
long long int var_7 = -7606432486835465224LL;
short var_8 = (short)22585;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)60;
int var_11 = 786259737;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
