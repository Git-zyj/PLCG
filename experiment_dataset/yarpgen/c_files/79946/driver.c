#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)246;
unsigned long long int var_4 = 3021167403518846344ULL;
long long int var_9 = 1755616291625080574LL;
short var_11 = (short)-25293;
int zero = 0;
long long int var_20 = 6802975369549173689LL;
long long int var_21 = -7345498936398204841LL;
long long int var_22 = 3212216493271314558LL;
long long int var_23 = -6536384017023389246LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
