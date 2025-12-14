#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38017;
unsigned char var_2 = (unsigned char)231;
unsigned char var_3 = (unsigned char)224;
long long int var_4 = -4259127713875554656LL;
unsigned int var_7 = 753379867U;
unsigned long long int var_11 = 2073473064575006731ULL;
int zero = 0;
int var_12 = -1188217503;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
