#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1093719885;
int var_13 = 1077197625;
unsigned char var_15 = (unsigned char)81;
int zero = 0;
int var_20 = 411181918;
unsigned short var_21 = (unsigned short)28931;
signed char var_22 = (signed char)98;
int var_23 = -1770077475;
long long int var_24 = 5724963017156438700LL;
int var_25 = 1740695792;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
