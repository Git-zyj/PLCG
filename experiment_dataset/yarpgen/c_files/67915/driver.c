#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18227898650664759108ULL;
unsigned long long int var_5 = 11274009746516882882ULL;
long long int var_6 = -6984696208276142178LL;
int zero = 0;
unsigned long long int var_10 = 12470581944435972053ULL;
unsigned long long int var_11 = 14903395732644691292ULL;
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
