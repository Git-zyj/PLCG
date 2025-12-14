#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9621851923439429525ULL;
int var_6 = -1998150588;
unsigned char var_12 = (unsigned char)195;
int zero = 0;
unsigned short var_17 = (unsigned short)11241;
long long int var_18 = 8285945986081682375LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
