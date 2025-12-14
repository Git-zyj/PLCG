#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
unsigned long long int var_2 = 9777647323922644534ULL;
unsigned long long int var_5 = 17136422985836372202ULL;
unsigned short var_10 = (unsigned short)44050;
int zero = 0;
int var_17 = 1891363715;
long long int var_18 = -3285078717352525952LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
