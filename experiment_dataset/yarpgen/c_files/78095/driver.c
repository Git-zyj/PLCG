#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-74;
short var_2 = (short)6313;
unsigned short var_4 = (unsigned short)34268;
signed char var_6 = (signed char)50;
long long int var_7 = 2154800829339435778LL;
long long int var_8 = 1139851940902422900LL;
unsigned int var_9 = 878125299U;
unsigned char var_10 = (unsigned char)178;
unsigned short var_12 = (unsigned short)28830;
int zero = 0;
short var_13 = (short)31808;
unsigned short var_14 = (unsigned short)35721;
short var_15 = (short)9821;
unsigned short var_16 = (unsigned short)56095;
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
