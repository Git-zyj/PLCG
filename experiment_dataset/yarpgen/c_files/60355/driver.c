#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6579852681074665659ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_14 = (unsigned char)152;
int zero = 0;
unsigned int var_15 = 3273037640U;
signed char var_16 = (signed char)78;
void init() {
}

void checksum() {
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
