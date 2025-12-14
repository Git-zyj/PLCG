#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10155;
int var_4 = -1029942047;
unsigned char var_5 = (unsigned char)132;
unsigned short var_8 = (unsigned short)48672;
short var_10 = (short)8127;
int zero = 0;
signed char var_12 = (signed char)52;
long long int var_13 = 5334626960742305917LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2282469487U;
unsigned short var_16 = (unsigned short)34952;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
