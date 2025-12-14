#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2712204204639409057ULL;
signed char var_1 = (signed char)-35;
short var_2 = (short)6955;
long long int var_6 = 1817059193315506017LL;
unsigned int var_7 = 2814189117U;
unsigned int var_8 = 903504175U;
unsigned short var_10 = (unsigned short)63070;
short var_13 = (short)32216;
unsigned int var_15 = 3137638517U;
unsigned char var_17 = (unsigned char)49;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)56686;
signed char var_21 = (signed char)47;
unsigned long long int var_22 = 413901485930431067ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
