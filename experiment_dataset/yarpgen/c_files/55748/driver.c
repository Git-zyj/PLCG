#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15389;
unsigned short var_12 = (unsigned short)14214;
int zero = 0;
signed char var_16 = (signed char)52;
unsigned short var_17 = (unsigned short)13386;
long long int var_18 = 5078787436577718569LL;
unsigned short var_19 = (unsigned short)28896;
unsigned short var_20 = (unsigned short)34743;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
