#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5112055173148299692LL;
int var_9 = 65002019;
unsigned int var_13 = 3406604296U;
int var_14 = -1949639003;
unsigned int var_15 = 1861440681U;
int zero = 0;
signed char var_19 = (signed char)-94;
short var_20 = (short)-31718;
unsigned short var_21 = (unsigned short)7765;
unsigned short var_22 = (unsigned short)60342;
long long int var_23 = 3227302126980514664LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
