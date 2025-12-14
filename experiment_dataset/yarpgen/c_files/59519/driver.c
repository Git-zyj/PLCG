#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)439;
unsigned long long int var_5 = 13187351589558732258ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)95;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)52988;
unsigned char var_16 = (unsigned char)245;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1693625662;
int var_19 = 1037779988;
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
