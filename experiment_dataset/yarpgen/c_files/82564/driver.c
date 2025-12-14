#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 829499684;
unsigned int var_11 = 3136780875U;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1196984338064472236LL;
unsigned char var_18 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
