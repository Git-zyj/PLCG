#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2839243119303972193LL;
unsigned int var_4 = 990390493U;
unsigned short var_5 = (unsigned short)19862;
int var_6 = 212095508;
long long int var_9 = 7497102921334375661LL;
unsigned long long int var_10 = 8320331772873000957ULL;
signed char var_11 = (signed char)32;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1355533127200697164ULL;
unsigned char var_15 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
