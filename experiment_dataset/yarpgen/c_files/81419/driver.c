#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3298780031493235304ULL;
int var_2 = -1682190838;
unsigned char var_5 = (unsigned char)26;
int var_7 = -663032382;
unsigned int var_10 = 2455883528U;
unsigned int var_12 = 3378826910U;
int zero = 0;
long long int var_13 = -2208812838104878703LL;
long long int var_14 = 7862296850486902425LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
