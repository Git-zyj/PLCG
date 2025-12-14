#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8942404054491518328ULL;
unsigned long long int var_4 = 11756946471274738178ULL;
long long int var_5 = -8698743958101783345LL;
unsigned long long int var_8 = 3426340989896376001ULL;
unsigned int var_9 = 2640969617U;
long long int var_10 = 887823108146627858LL;
long long int var_12 = 4381133368706346543LL;
unsigned char var_16 = (unsigned char)224;
unsigned char var_18 = (unsigned char)70;
long long int var_19 = -2372432849568705129LL;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
