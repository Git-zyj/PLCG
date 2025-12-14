#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned char var_1 = (unsigned char)117;
signed char var_3 = (signed char)34;
signed char var_4 = (signed char)6;
long long int var_8 = -2693795640847778998LL;
unsigned int var_11 = 4169466798U;
int zero = 0;
unsigned long long int var_14 = 14209900730888920261ULL;
long long int var_15 = 7600226034755886231LL;
long long int var_16 = -552891164714299834LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
