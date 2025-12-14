#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 15497947151814636271ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)37;
unsigned short var_7 = (unsigned short)60177;
signed char var_8 = (signed char)30;
long long int var_9 = 339538110059540268LL;
int zero = 0;
long long int var_18 = -213073236477248537LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)30581;
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
