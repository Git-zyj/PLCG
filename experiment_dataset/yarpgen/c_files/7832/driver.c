#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50763;
unsigned long long int var_2 = 13939098441132946496ULL;
long long int var_8 = 8536964484259619815LL;
unsigned short var_9 = (unsigned short)19259;
signed char var_13 = (signed char)100;
unsigned char var_18 = (unsigned char)242;
int zero = 0;
long long int var_19 = -571798923535392618LL;
short var_20 = (short)-18966;
void init() {
}

void checksum() {
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
