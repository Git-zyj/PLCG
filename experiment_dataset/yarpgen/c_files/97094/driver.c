#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3662906546010819294LL;
int var_6 = -1393014255;
long long int var_9 = -2744148513064355326LL;
int var_12 = 1912226597;
unsigned char var_15 = (unsigned char)45;
int var_17 = 1682119051;
int zero = 0;
signed char var_18 = (signed char)-67;
short var_19 = (short)-5665;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)24769;
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
