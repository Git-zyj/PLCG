#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1173902335;
unsigned short var_7 = (unsigned short)27771;
unsigned char var_8 = (unsigned char)192;
long long int var_9 = -2808022443617909248LL;
int zero = 0;
unsigned long long int var_11 = 3722441352313790511ULL;
long long int var_12 = 9061922892274140562LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
