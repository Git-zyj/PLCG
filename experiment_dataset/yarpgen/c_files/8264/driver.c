#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -561319798;
unsigned char var_5 = (unsigned char)52;
unsigned long long int var_10 = 8354398629105052672ULL;
unsigned long long int var_13 = 6875461795942637147ULL;
int zero = 0;
unsigned long long int var_17 = 5258363255541555743ULL;
int var_18 = 720087091;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
