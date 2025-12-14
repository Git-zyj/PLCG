#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7034238986604568278ULL;
unsigned short var_2 = (unsigned short)1017;
unsigned char var_9 = (unsigned char)68;
int zero = 0;
unsigned long long int var_17 = 4461997315888560306ULL;
unsigned long long int var_18 = 10803173381068462220ULL;
int var_19 = -1891143988;
unsigned int var_20 = 26373825U;
void init() {
}

void checksum() {
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
