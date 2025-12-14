#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7237497003906041695LL;
int var_8 = -673449942;
int zero = 0;
long long int var_14 = 3845078295954692397LL;
unsigned char var_15 = (unsigned char)41;
unsigned short var_16 = (unsigned short)53801;
void init() {
}

void checksum() {
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
