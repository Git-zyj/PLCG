#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48902;
unsigned long long int var_1 = 9360081816838894519ULL;
int var_4 = 1136122390;
unsigned char var_9 = (unsigned char)69;
signed char var_12 = (signed char)21;
long long int var_13 = -5502301380024950478LL;
unsigned long long int var_14 = 15318243819456422529ULL;
int zero = 0;
short var_18 = (short)-2977;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
