#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32449;
int var_10 = -494507082;
unsigned short var_12 = (unsigned short)51819;
unsigned char var_13 = (unsigned char)1;
unsigned short var_14 = (unsigned short)35354;
signed char var_17 = (signed char)-85;
int zero = 0;
long long int var_18 = 7065620883863623122LL;
unsigned long long int var_19 = 11482488008614193703ULL;
unsigned short var_20 = (unsigned short)19704;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
