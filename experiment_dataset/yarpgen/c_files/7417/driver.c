#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6993875730690337484LL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)111;
short var_11 = (short)-25631;
signed char var_12 = (signed char)-53;
unsigned int var_13 = 1726421403U;
unsigned char var_14 = (unsigned char)10;
signed char var_15 = (signed char)-48;
unsigned char var_17 = (unsigned char)116;
int zero = 0;
unsigned short var_18 = (unsigned short)4356;
unsigned char var_19 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
