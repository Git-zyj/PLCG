#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6174602080681856958ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = -1075908759419455727LL;
unsigned char var_12 = (unsigned char)164;
long long int var_13 = 3573111712614815118LL;
void init() {
}

void checksum() {
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
