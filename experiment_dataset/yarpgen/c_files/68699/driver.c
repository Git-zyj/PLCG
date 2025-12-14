#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 11587339109470293646ULL;
long long int var_6 = 1004173132348710160LL;
int zero = 0;
long long int var_10 = 302220611365717221LL;
long long int var_11 = -5685165416948674244LL;
unsigned long long int var_12 = 9445071119443334958ULL;
unsigned long long int var_13 = 11753355251030853492ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
