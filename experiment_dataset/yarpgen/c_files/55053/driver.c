#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6247194495634459491LL;
unsigned char var_3 = (unsigned char)231;
unsigned long long int var_6 = 15448576798374850086ULL;
short var_10 = (short)31354;
int zero = 0;
short var_12 = (short)-24183;
unsigned int var_13 = 1133709884U;
long long int var_14 = -2461431770351105839LL;
unsigned long long int var_15 = 2678978535143407544ULL;
long long int var_16 = 3673890809766224391LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
