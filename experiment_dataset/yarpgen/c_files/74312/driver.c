#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6174;
unsigned short var_1 = (unsigned short)61958;
unsigned short var_2 = (unsigned short)34802;
unsigned short var_5 = (unsigned short)32604;
unsigned short var_6 = (unsigned short)14348;
unsigned short var_9 = (unsigned short)20426;
unsigned short var_10 = (unsigned short)1847;
unsigned short var_11 = (unsigned short)24216;
unsigned short var_12 = (unsigned short)23748;
int zero = 0;
unsigned short var_13 = (unsigned short)57537;
unsigned short var_14 = (unsigned short)61603;
unsigned short var_15 = (unsigned short)46104;
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
