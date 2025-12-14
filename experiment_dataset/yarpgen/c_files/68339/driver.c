#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3220095668938714259LL;
unsigned long long int var_4 = 12573345211191378514ULL;
unsigned long long int var_5 = 9153489453243158758ULL;
short var_7 = (short)9278;
unsigned char var_10 = (unsigned char)224;
int zero = 0;
unsigned char var_15 = (unsigned char)203;
unsigned char var_16 = (unsigned char)125;
void init() {
}

void checksum() {
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
