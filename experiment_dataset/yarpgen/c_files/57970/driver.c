#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-44;
int var_11 = 181018164;
unsigned long long int var_13 = 1763978278974042002ULL;
unsigned short var_14 = (unsigned short)42966;
int zero = 0;
int var_17 = 1036189481;
unsigned char var_18 = (unsigned char)64;
int var_19 = -554288737;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
