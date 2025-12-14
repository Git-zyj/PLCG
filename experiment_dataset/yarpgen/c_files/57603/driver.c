#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-24;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)68;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-18;
unsigned short var_18 = (unsigned short)62848;
unsigned short var_19 = (unsigned short)9321;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
