#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 904533977;
unsigned long long int var_3 = 14188612575153949496ULL;
unsigned long long int var_6 = 1568256503702287791ULL;
unsigned long long int var_7 = 18011099702116052135ULL;
long long int var_10 = 436033112638436056LL;
int zero = 0;
long long int var_11 = 6080455419597643388LL;
unsigned char var_12 = (unsigned char)89;
long long int var_13 = -1472206175360340428LL;
int var_14 = 1424738168;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
