#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1641427190156991462ULL;
long long int var_5 = -7535993458663546022LL;
signed char var_6 = (signed char)65;
int var_7 = 1377505098;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 2726285550662170391ULL;
unsigned long long int var_10 = 17322191294792068838ULL;
int var_12 = 934102944;
unsigned long long int var_13 = 9421027761414205287ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)30;
int var_17 = 1300925368;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
