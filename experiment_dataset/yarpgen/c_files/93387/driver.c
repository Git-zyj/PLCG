#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)7;
unsigned long long int var_16 = 11658865301719221334ULL;
int zero = 0;
int var_19 = 308850897;
unsigned long long int var_20 = 302119008110874923ULL;
unsigned char var_21 = (unsigned char)82;
unsigned long long int var_22 = 16608827790169895006ULL;
long long int var_23 = 159286960616051692LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
