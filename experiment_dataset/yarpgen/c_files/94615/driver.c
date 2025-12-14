#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4707058058103039655LL;
short var_1 = (short)20545;
long long int var_2 = 3540756346510616074LL;
int zero = 0;
long long int var_10 = -1852184127690704561LL;
unsigned char var_11 = (unsigned char)74;
unsigned char var_12 = (unsigned char)101;
unsigned char var_13 = (unsigned char)62;
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
