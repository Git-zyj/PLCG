#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1820;
signed char var_2 = (signed char)-63;
int var_3 = -1815064327;
long long int var_5 = 8458051134861340565LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)5164;
short var_16 = (short)28905;
int zero = 0;
long long int var_17 = 2735112755413204205LL;
unsigned int var_18 = 4236613399U;
short var_19 = (short)-25286;
void init() {
}

void checksum() {
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
