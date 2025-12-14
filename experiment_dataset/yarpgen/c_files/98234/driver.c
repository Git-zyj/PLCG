#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)184;
int var_6 = -1390375094;
unsigned char var_7 = (unsigned char)45;
long long int var_9 = -7925474558296407679LL;
int var_11 = -1831070993;
int var_15 = 1730422189;
int zero = 0;
long long int var_16 = -6365049125445808191LL;
unsigned long long int var_17 = 3428089753381558718ULL;
unsigned long long int var_18 = 2751485176533666599ULL;
void init() {
}

void checksum() {
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
