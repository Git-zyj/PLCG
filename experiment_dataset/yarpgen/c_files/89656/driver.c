#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)125;
unsigned short var_6 = (unsigned short)23473;
signed char var_7 = (signed char)120;
int var_8 = -1516116130;
long long int var_14 = -7539392562845952402LL;
int zero = 0;
unsigned long long int var_20 = 16048918640981797689ULL;
unsigned long long int var_21 = 11872995705087953225ULL;
unsigned char var_22 = (unsigned char)137;
int var_23 = 945756933;
short var_24 = (short)-10256;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
