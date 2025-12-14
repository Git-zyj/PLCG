#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1222216004;
unsigned int var_3 = 2764401499U;
signed char var_4 = (signed char)17;
unsigned short var_14 = (unsigned short)40957;
int zero = 0;
unsigned long long int var_20 = 12371837007203624596ULL;
int var_21 = 68590755;
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
