#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)41;
long long int var_6 = -2333097877977266403LL;
unsigned long long int var_7 = 4285510798097499414ULL;
int var_9 = -1480536780;
unsigned long long int var_11 = 13854892934186046755ULL;
int zero = 0;
long long int var_13 = -5633933200619481805LL;
unsigned char var_14 = (unsigned char)183;
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
