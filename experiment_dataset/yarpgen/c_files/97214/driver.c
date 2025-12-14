#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -948797620;
unsigned long long int var_4 = 12773804598830437011ULL;
int var_5 = 1920246146;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-20511;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 12390530380383310788ULL;
unsigned long long int var_15 = 11509373583146126160ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6368428376481779596LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)65322;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
