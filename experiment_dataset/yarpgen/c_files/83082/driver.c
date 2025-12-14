#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 794358987361114611ULL;
short var_3 = (short)-30284;
unsigned char var_4 = (unsigned char)100;
unsigned short var_5 = (unsigned short)23436;
unsigned char var_7 = (unsigned char)43;
unsigned long long int var_9 = 15772877425625735614ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)38581;
int var_11 = -510267193;
unsigned short var_12 = (unsigned short)14075;
short var_13 = (short)7479;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
