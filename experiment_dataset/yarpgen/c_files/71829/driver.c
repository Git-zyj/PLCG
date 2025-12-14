#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)39341;
unsigned long long int var_14 = 10507987027799362005ULL;
signed char var_15 = (signed char)-110;
long long int var_17 = -9122881834760734642LL;
unsigned short var_18 = (unsigned short)21130;
unsigned short var_19 = (unsigned short)38007;
int zero = 0;
int var_20 = -1426171415;
unsigned char var_21 = (unsigned char)175;
unsigned short var_22 = (unsigned short)5296;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
