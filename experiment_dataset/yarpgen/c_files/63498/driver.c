#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 714816708U;
unsigned short var_5 = (unsigned short)34928;
long long int var_7 = -8112916839709873779LL;
unsigned long long int var_9 = 7464653890788575215ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2470562759112789617ULL;
long long int var_13 = -1209560849549193575LL;
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
