#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)96;
short var_5 = (short)6637;
int var_8 = 580630688;
unsigned int var_14 = 745786884U;
int var_15 = 74985936;
unsigned short var_16 = (unsigned short)47828;
int zero = 0;
unsigned char var_18 = (unsigned char)29;
signed char var_19 = (signed char)121;
short var_20 = (short)-31336;
int var_21 = 903113397;
unsigned short var_22 = (unsigned short)61081;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
