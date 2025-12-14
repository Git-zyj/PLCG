#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned int var_3 = 3625358218U;
int var_4 = -525224861;
unsigned char var_9 = (unsigned char)68;
unsigned long long int var_12 = 17979843038039105952ULL;
int zero = 0;
short var_14 = (short)5033;
int var_15 = 1032706708;
void init() {
}

void checksum() {
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
