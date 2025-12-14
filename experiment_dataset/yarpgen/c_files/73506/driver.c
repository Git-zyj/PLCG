#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
signed char var_2 = (signed char)-117;
long long int var_4 = -8454453431641275129LL;
unsigned long long int var_5 = 5202243572118354945ULL;
unsigned char var_17 = (unsigned char)29;
int zero = 0;
long long int var_20 = -8408340138154043605LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)12291;
void init() {
}

void checksum() {
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
