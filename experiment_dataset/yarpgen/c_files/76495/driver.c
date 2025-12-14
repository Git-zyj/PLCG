#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)474;
int var_2 = 194321197;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)63157;
int var_6 = 1874830949;
unsigned char var_7 = (unsigned char)89;
int var_9 = -1112590932;
unsigned int var_10 = 2257915486U;
short var_11 = (short)497;
int zero = 0;
unsigned char var_13 = (unsigned char)210;
signed char var_14 = (signed char)-26;
signed char var_15 = (signed char)-71;
signed char var_16 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
