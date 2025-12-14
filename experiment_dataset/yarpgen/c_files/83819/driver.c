#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
int var_1 = -686051973;
unsigned long long int var_6 = 17691461405711165527ULL;
signed char var_7 = (signed char)18;
signed char var_14 = (signed char)-104;
int zero = 0;
signed char var_16 = (signed char)59;
unsigned long long int var_17 = 15571411060858401290ULL;
long long int var_18 = 1966062430997191192LL;
long long int var_19 = 7129945358328455778LL;
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
