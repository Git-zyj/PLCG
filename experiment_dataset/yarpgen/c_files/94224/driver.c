#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -548167259582427364LL;
_Bool var_6 = (_Bool)0;
long long int var_12 = 6106906671252254849LL;
int zero = 0;
unsigned long long int var_14 = 10546144741216794070ULL;
signed char var_15 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
