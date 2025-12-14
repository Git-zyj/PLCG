#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3889356563597877518LL;
_Bool var_4 = (_Bool)0;
int var_5 = 1852348451;
unsigned long long int var_7 = 11351973196680523896ULL;
unsigned long long int var_11 = 13786373858651913828ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)57707;
unsigned char var_21 = (unsigned char)12;
unsigned long long int var_22 = 11058164412663023297ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
