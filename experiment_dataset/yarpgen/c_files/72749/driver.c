#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59111;
signed char var_3 = (signed char)-90;
_Bool var_7 = (_Bool)0;
int var_10 = -1014210947;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 932380440629955259ULL;
short var_15 = (short)17202;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
