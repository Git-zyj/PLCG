#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2848137871U;
short var_2 = (short)-8241;
signed char var_3 = (signed char)-116;
unsigned short var_4 = (unsigned short)46367;
short var_7 = (short)-5794;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-25882;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 4843726467553911900ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)189;
unsigned char var_22 = (unsigned char)86;
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
