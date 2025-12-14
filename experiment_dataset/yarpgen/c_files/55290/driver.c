#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned int var_1 = 1051167903U;
long long int var_2 = 8920981048028479776LL;
unsigned short var_3 = (unsigned short)8090;
unsigned long long int var_4 = 12168900806624835621ULL;
long long int var_5 = 1422305457025164369LL;
long long int var_7 = -3271745873633268639LL;
short var_9 = (short)-32190;
unsigned long long int var_13 = 12305216273319543392ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15224517092852223453ULL;
short var_20 = (short)-14108;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
