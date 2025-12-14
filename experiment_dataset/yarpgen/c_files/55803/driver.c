#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12279;
long long int var_5 = -5058943922879645122LL;
_Bool var_6 = (_Bool)0;
long long int var_8 = 510318929109356334LL;
unsigned char var_14 = (unsigned char)26;
unsigned int var_16 = 3988069044U;
int zero = 0;
unsigned int var_20 = 4017385677U;
unsigned int var_21 = 2360008269U;
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
