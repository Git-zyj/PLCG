#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)215;
unsigned int var_5 = 4255655916U;
unsigned long long int var_7 = 9613665607029849198ULL;
signed char var_10 = (signed char)-32;
signed char var_11 = (signed char)-74;
unsigned long long int var_14 = 1732478126109685366ULL;
unsigned char var_19 = (unsigned char)187;
int zero = 0;
short var_20 = (short)18409;
unsigned short var_21 = (unsigned short)40775;
unsigned int var_22 = 4009483253U;
_Bool var_23 = (_Bool)0;
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
