#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)121;
signed char var_12 = (signed char)-112;
int zero = 0;
short var_15 = (short)-3649;
long long int var_16 = 493579824632302004LL;
unsigned long long int var_17 = 13192307954730953321ULL;
signed char var_18 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
