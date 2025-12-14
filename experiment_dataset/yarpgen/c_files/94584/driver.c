#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43516;
unsigned char var_9 = (unsigned char)19;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)166;
int var_15 = -1219998583;
int zero = 0;
long long int var_18 = -3998233819974981858LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
