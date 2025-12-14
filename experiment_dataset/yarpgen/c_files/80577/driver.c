#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13308229791338812420ULL;
signed char var_8 = (signed char)-48;
unsigned char var_9 = (unsigned char)250;
int zero = 0;
unsigned short var_14 = (unsigned short)4483;
unsigned char var_15 = (unsigned char)152;
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
