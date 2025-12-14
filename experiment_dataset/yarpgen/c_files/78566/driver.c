#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 1459697448791222563ULL;
unsigned char var_7 = (unsigned char)130;
unsigned int var_8 = 950764058U;
unsigned short var_13 = (unsigned short)52300;
unsigned int var_17 = 563501762U;
int zero = 0;
int var_20 = -862273155;
unsigned short var_21 = (unsigned short)15067;
unsigned short var_22 = (unsigned short)53565;
unsigned int var_23 = 1212499916U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
