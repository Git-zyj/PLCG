#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2061895155;
int var_3 = -22269252;
unsigned char var_4 = (unsigned char)238;
long long int var_6 = 7692874577637710331LL;
unsigned short var_7 = (unsigned short)39492;
int var_8 = -1117867789;
long long int var_9 = 4408127958364552339LL;
unsigned short var_10 = (unsigned short)36315;
long long int var_11 = 3968990511209820394LL;
int zero = 0;
signed char var_12 = (signed char)127;
unsigned char var_13 = (unsigned char)169;
unsigned char var_14 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
