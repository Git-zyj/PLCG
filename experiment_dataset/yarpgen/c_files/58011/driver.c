#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 880701709U;
unsigned short var_10 = (unsigned short)54656;
signed char var_15 = (signed char)61;
int zero = 0;
signed char var_19 = (signed char)-73;
long long int var_20 = -5370342148552691826LL;
unsigned char var_21 = (unsigned char)184;
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
