#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11905;
unsigned short var_2 = (unsigned short)22292;
long long int var_4 = 7904944307071405642LL;
unsigned char var_5 = (unsigned char)225;
int var_9 = 2039106015;
int var_11 = 2063630317;
unsigned long long int var_14 = 17327397819695867891ULL;
unsigned char var_16 = (unsigned char)172;
unsigned long long int var_18 = 13473267606514147926ULL;
int zero = 0;
unsigned int var_20 = 1561504956U;
unsigned int var_21 = 1749850864U;
unsigned long long int var_22 = 7393887389827716777ULL;
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
