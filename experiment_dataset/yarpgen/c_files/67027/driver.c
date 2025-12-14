#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16321562373763286644ULL;
unsigned long long int var_3 = 15985726873003129495ULL;
int var_8 = 1296551735;
int zero = 0;
long long int var_10 = 3841004873640844626LL;
short var_11 = (short)-25348;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
