#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 313616563975844293LL;
unsigned short var_9 = (unsigned short)677;
int var_10 = 410587978;
short var_13 = (short)31142;
int zero = 0;
unsigned short var_14 = (unsigned short)37196;
unsigned short var_15 = (unsigned short)26326;
signed char var_16 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
