#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2108557902;
long long int var_1 = 2182468166884974501LL;
unsigned short var_3 = (unsigned short)59605;
int zero = 0;
unsigned long long int var_13 = 10566282998700352765ULL;
short var_14 = (short)8554;
unsigned int var_15 = 159308671U;
unsigned int var_16 = 4022800834U;
void init() {
}

void checksum() {
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
