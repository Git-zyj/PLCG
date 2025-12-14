#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37366;
long long int var_1 = 8777207442769898319LL;
unsigned char var_5 = (unsigned char)158;
unsigned int var_6 = 2621970901U;
unsigned short var_7 = (unsigned short)60692;
long long int var_8 = -9219338624537921686LL;
int var_9 = -1048161865;
unsigned char var_10 = (unsigned char)187;
signed char var_11 = (signed char)106;
int zero = 0;
unsigned char var_12 = (unsigned char)170;
unsigned int var_13 = 1685569385U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
