#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3392756903870114506LL;
signed char var_11 = (signed char)-50;
long long int var_16 = -8822914373231759614LL;
unsigned long long int var_17 = 14889252276659621021ULL;
unsigned long long int var_18 = 10357338875280663245ULL;
int zero = 0;
signed char var_19 = (signed char)121;
int var_20 = 1187330053;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
