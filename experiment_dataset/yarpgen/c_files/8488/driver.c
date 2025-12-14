#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = 4778008404610369710LL;
int var_6 = -963815326;
unsigned int var_7 = 1887328562U;
unsigned long long int var_9 = 16627199582145401946ULL;
_Bool var_10 = (_Bool)0;
int var_12 = -11809986;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_19 = -4557045195918791486LL;
unsigned short var_20 = (unsigned short)904;
unsigned char var_21 = (unsigned char)3;
unsigned char var_22 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
