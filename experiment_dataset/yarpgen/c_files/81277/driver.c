#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2952924661064178817LL;
int zero = 0;
long long int var_18 = 6325512980072939418LL;
unsigned short var_19 = (unsigned short)59916;
unsigned char var_20 = (unsigned char)18;
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
