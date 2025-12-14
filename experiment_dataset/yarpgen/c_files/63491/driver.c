#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2900763080U;
signed char var_1 = (signed char)-49;
_Bool var_4 = (_Bool)0;
unsigned int var_11 = 3789617574U;
unsigned int var_12 = 1215183093U;
unsigned char var_14 = (unsigned char)86;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 2961180211212160564LL;
unsigned short var_18 = (unsigned short)1373;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
