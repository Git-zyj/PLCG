#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48206;
long long int var_4 = -4980592471191373395LL;
signed char var_5 = (signed char)26;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)61;
unsigned long long int var_10 = 13295292210809152081ULL;
unsigned long long int var_12 = 1959397996522133865ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)148;
unsigned long long int var_14 = 15724088929231360478ULL;
void init() {
}

void checksum() {
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
