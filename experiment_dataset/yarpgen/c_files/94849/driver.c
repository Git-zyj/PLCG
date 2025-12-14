#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned char var_1 = (unsigned char)200;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)110;
short var_5 = (short)-21942;
signed char var_6 = (signed char)13;
unsigned int var_8 = 2031240044U;
unsigned short var_9 = (unsigned short)47737;
unsigned short var_11 = (unsigned short)59742;
unsigned int var_12 = 2482169482U;
unsigned long long int var_13 = 9368432236660432930ULL;
int zero = 0;
short var_17 = (short)20729;
signed char var_18 = (signed char)-109;
unsigned short var_19 = (unsigned short)61816;
short var_20 = (short)18416;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
