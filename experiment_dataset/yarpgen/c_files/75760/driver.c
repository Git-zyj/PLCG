#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3810822304U;
int var_1 = 384128255;
long long int var_4 = 9038053373255423038LL;
unsigned char var_5 = (unsigned char)196;
signed char var_6 = (signed char)94;
unsigned char var_7 = (unsigned char)29;
int var_8 = 1923583589;
unsigned short var_9 = (unsigned short)44978;
int zero = 0;
long long int var_10 = 7634757841020659876LL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
