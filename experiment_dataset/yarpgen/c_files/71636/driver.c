#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)165;
unsigned long long int var_5 = 14692623813967248702ULL;
signed char var_6 = (signed char)9;
int var_11 = -636013838;
short var_12 = (short)29647;
int zero = 0;
int var_16 = -155756237;
int var_17 = -1492770502;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
