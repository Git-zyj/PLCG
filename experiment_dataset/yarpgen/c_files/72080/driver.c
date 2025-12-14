#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3913111992279704389ULL;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 3869841757201391159ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)12350;
unsigned short var_21 = (unsigned short)3028;
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
