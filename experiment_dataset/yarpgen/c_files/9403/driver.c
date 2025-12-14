#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
unsigned long long int var_3 = 9780290300619636265ULL;
unsigned long long int var_5 = 10543406921321923024ULL;
unsigned long long int var_10 = 14800776787781633007ULL;
int zero = 0;
long long int var_11 = 8435904724360479658LL;
unsigned short var_12 = (unsigned short)58754;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
