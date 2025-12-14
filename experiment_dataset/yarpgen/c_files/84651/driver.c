#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28313;
unsigned long long int var_1 = 2857548330977153770ULL;
int var_2 = 1594109122;
long long int var_3 = -7370526330583521255LL;
unsigned short var_5 = (unsigned short)42703;
unsigned short var_7 = (unsigned short)60233;
unsigned long long int var_8 = 9160131454189958542ULL;
signed char var_10 = (signed char)105;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -1386230454;
unsigned char var_13 = (unsigned char)184;
signed char var_14 = (signed char)-110;
int var_15 = -439524183;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
