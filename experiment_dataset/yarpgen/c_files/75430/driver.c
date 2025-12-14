#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7748698511490891057ULL;
signed char var_3 = (signed char)15;
unsigned long long int var_6 = 17487303391729520286ULL;
unsigned char var_10 = (unsigned char)137;
int zero = 0;
signed char var_12 = (signed char)121;
unsigned long long int var_13 = 12454570814843489658ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
