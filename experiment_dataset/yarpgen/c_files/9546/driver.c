#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3126095780633882231LL;
int var_2 = -103234663;
unsigned int var_4 = 1347353695U;
int var_10 = -1887976869;
long long int var_11 = -6247375431741237981LL;
unsigned char var_15 = (unsigned char)193;
int zero = 0;
int var_16 = -1791587695;
unsigned short var_17 = (unsigned short)29805;
long long int var_18 = 1696793531698325782LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
