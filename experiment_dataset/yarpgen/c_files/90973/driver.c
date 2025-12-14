#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 487646777;
unsigned long long int var_10 = 16739776766228601750ULL;
long long int var_12 = 8476666845001544370LL;
unsigned long long int var_13 = 9459482365868155970ULL;
int zero = 0;
unsigned long long int var_16 = 7244894987068212997ULL;
unsigned long long int var_17 = 6531697225883824870ULL;
unsigned long long int var_18 = 9386303103619144425ULL;
unsigned long long int var_19 = 6960256726906451899ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
