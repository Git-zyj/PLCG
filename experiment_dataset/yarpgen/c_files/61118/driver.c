#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)203;
unsigned int var_4 = 1371645803U;
short var_5 = (short)-20902;
unsigned short var_6 = (unsigned short)22045;
signed char var_7 = (signed char)-2;
unsigned int var_9 = 1825881396U;
int zero = 0;
int var_17 = 2000644435;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 10798628765768148735ULL;
unsigned char var_20 = (unsigned char)180;
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
