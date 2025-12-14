#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7783394786928761015ULL;
short var_2 = (short)-3753;
short var_3 = (short)20251;
unsigned char var_4 = (unsigned char)159;
unsigned short var_5 = (unsigned short)1183;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)27394;
int zero = 0;
short var_10 = (short)15710;
unsigned long long int var_11 = 3684562080459441647ULL;
short var_12 = (short)12688;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
