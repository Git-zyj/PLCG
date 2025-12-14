#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned int var_4 = 57564901U;
unsigned long long int var_8 = 15536856313272505676ULL;
signed char var_10 = (signed char)18;
int var_14 = -1487763543;
short var_15 = (short)17522;
unsigned char var_16 = (unsigned char)199;
short var_17 = (short)20885;
int zero = 0;
signed char var_20 = (signed char)-95;
long long int var_21 = -6823381210589324258LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
