#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1572;
long long int var_4 = 7185625465920860814LL;
int zero = 0;
unsigned char var_13 = (unsigned char)255;
signed char var_14 = (signed char)123;
unsigned long long int var_15 = 6168784900975586412ULL;
signed char var_16 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
