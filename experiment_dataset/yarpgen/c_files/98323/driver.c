#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2077670405515945923LL;
unsigned long long int var_3 = 13944976325413102511ULL;
unsigned char var_6 = (unsigned char)251;
int zero = 0;
unsigned long long int var_10 = 3761227090935434875ULL;
long long int var_11 = 4093059289033504426LL;
unsigned char var_12 = (unsigned char)154;
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
