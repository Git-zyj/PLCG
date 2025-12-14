#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-6759;
long long int var_8 = -547981658514557996LL;
unsigned int var_15 = 3240592354U;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)53;
int zero = 0;
unsigned int var_19 = 1372142944U;
unsigned char var_20 = (unsigned char)219;
unsigned char var_21 = (unsigned char)41;
_Bool var_22 = (_Bool)1;
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
