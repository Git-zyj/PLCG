#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1332239487;
int var_8 = 1059108601;
short var_9 = (short)24217;
unsigned char var_10 = (unsigned char)248;
short var_14 = (short)-25456;
long long int var_18 = 2969046283599175007LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12123682606060448605ULL;
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
