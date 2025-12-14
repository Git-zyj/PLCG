#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1764937077;
int var_3 = 1904851071;
unsigned long long int var_5 = 17774565660453132700ULL;
unsigned char var_8 = (unsigned char)69;
int var_9 = -326929925;
int zero = 0;
int var_10 = -1415930190;
int var_11 = -771315885;
_Bool var_12 = (_Bool)0;
int var_13 = -973116698;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
