#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1283114503;
long long int var_3 = 2505453621762963847LL;
unsigned char var_6 = (unsigned char)253;
int zero = 0;
signed char var_10 = (signed char)-102;
long long int var_11 = -745577237605406767LL;
signed char var_12 = (signed char)79;
long long int var_13 = 8989291171048756880LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
