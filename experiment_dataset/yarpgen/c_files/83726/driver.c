#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5135931263927820384LL;
int var_1 = 710173926;
unsigned char var_3 = (unsigned char)233;
unsigned long long int var_7 = 17472247844333270945ULL;
signed char var_10 = (signed char)(-127 - 1);
unsigned short var_11 = (unsigned short)2197;
long long int var_18 = 32560104356861142LL;
int zero = 0;
unsigned long long int var_19 = 4925106691280820958ULL;
unsigned char var_20 = (unsigned char)177;
unsigned short var_21 = (unsigned short)54301;
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
