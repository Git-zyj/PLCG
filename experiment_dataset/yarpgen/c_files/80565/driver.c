#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53183;
int var_1 = 65569343;
unsigned short var_2 = (unsigned short)38929;
unsigned short var_4 = (unsigned short)40802;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)184;
unsigned char var_8 = (unsigned char)92;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 18031277199659666383ULL;
unsigned char var_17 = (unsigned char)230;
int zero = 0;
unsigned long long int var_18 = 5222004411130779864ULL;
unsigned int var_19 = 2361130827U;
int var_20 = 81755219;
unsigned long long int var_21 = 9683129800987886227ULL;
int var_22 = 1710211647;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
