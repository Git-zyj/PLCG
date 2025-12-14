#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4020201783307728928LL;
int var_3 = 299326892;
unsigned char var_13 = (unsigned char)9;
int zero = 0;
unsigned int var_17 = 1837417346U;
unsigned char var_18 = (unsigned char)188;
int var_19 = 782092320;
short var_20 = (short)25391;
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
