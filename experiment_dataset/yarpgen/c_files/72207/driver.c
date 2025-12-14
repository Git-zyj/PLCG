#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7340;
signed char var_1 = (signed char)127;
unsigned char var_2 = (unsigned char)141;
unsigned long long int var_3 = 17318960567068648721ULL;
signed char var_5 = (signed char)100;
unsigned int var_6 = 886052740U;
unsigned short var_7 = (unsigned short)28121;
signed char var_9 = (signed char)-37;
short var_10 = (short)27970;
int var_15 = -1234027051;
short var_16 = (short)15429;
signed char var_18 = (signed char)11;
int zero = 0;
signed char var_19 = (signed char)-4;
unsigned short var_20 = (unsigned short)57506;
unsigned char var_21 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
