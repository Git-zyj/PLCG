#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46158;
unsigned long long int var_6 = 1614991090452294214ULL;
unsigned long long int var_7 = 158562334757368205ULL;
unsigned short var_8 = (unsigned short)8195;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 732409493;
void init() {
}

void checksum() {
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
