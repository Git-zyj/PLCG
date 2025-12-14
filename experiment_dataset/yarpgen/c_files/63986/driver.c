#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)117;
unsigned long long int var_4 = 3236358303964442197ULL;
unsigned short var_9 = (unsigned short)64532;
unsigned char var_11 = (unsigned char)195;
int var_19 = -287311138;
int zero = 0;
short var_20 = (short)-401;
unsigned char var_21 = (unsigned char)158;
unsigned long long int var_22 = 9067931359346294413ULL;
long long int var_23 = -3806828674556319443LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
