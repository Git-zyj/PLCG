#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-43;
signed char var_8 = (signed char)-126;
unsigned char var_10 = (unsigned char)28;
int zero = 0;
unsigned long long int var_17 = 4934006769723551526ULL;
long long int var_18 = 4398509781269965485LL;
void init() {
}

void checksum() {
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
