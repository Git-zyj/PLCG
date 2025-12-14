#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1927128947;
long long int var_3 = 1317914562560824022LL;
int var_6 = 981227403;
int var_8 = 1677481878;
long long int var_10 = 2255322797131218131LL;
int zero = 0;
int var_13 = 410664922;
signed char var_14 = (signed char)-42;
long long int var_15 = -6252602338251009563LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
