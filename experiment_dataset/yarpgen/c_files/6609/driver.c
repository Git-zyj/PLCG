#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)210;
long long int var_11 = 4057931123884349354LL;
unsigned short var_18 = (unsigned short)34078;
int zero = 0;
unsigned long long int var_20 = 3806582881684239008ULL;
unsigned long long int var_21 = 11144567365740291609ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
