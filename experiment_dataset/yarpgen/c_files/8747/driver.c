#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1246997011U;
unsigned long long int var_11 = 17146572390473213889ULL;
unsigned char var_15 = (unsigned char)97;
unsigned long long int var_18 = 6866920729322722306ULL;
int zero = 0;
long long int var_20 = -3115271528595438434LL;
unsigned long long int var_21 = 157669063803585908ULL;
unsigned long long int var_22 = 9972909152562827872ULL;
void init() {
}

void checksum() {
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
