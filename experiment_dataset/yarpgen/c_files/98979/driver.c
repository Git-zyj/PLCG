#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1276524456590319836LL;
unsigned long long int var_4 = 7344212660351148088ULL;
unsigned long long int var_9 = 5447754054710882191ULL;
int zero = 0;
signed char var_12 = (signed char)-102;
long long int var_13 = -1768130689121545171LL;
unsigned char var_14 = (unsigned char)95;
void init() {
}

void checksum() {
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
