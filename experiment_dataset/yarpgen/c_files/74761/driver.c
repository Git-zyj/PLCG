#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned long long int var_1 = 18151910074644577319ULL;
short var_2 = (short)-16228;
unsigned short var_6 = (unsigned short)6840;
short var_9 = (short)-14329;
unsigned short var_10 = (unsigned short)51732;
int zero = 0;
unsigned long long int var_13 = 1708800498337242694ULL;
long long int var_14 = -3991935408792079545LL;
unsigned char var_15 = (unsigned char)117;
unsigned char var_16 = (unsigned char)36;
unsigned long long int var_17 = 9840248423603161442ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
