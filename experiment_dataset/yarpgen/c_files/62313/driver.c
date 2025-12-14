#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2282134975U;
unsigned short var_5 = (unsigned short)45465;
signed char var_8 = (signed char)18;
int zero = 0;
unsigned long long int var_15 = 17408260517353069865ULL;
unsigned char var_16 = (unsigned char)154;
signed char var_17 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
