#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6322433086032929656LL;
_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)-46;
_Bool var_8 = (_Bool)0;
int var_9 = 1430744383;
int zero = 0;
unsigned char var_10 = (unsigned char)175;
long long int var_11 = -1139015586653293459LL;
long long int var_12 = -2814350456377893249LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
