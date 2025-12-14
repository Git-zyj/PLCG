#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21334;
unsigned long long int var_1 = 11644951095121364017ULL;
unsigned int var_2 = 3820356864U;
signed char var_3 = (signed char)-7;
unsigned long long int var_5 = 14355000437019092706ULL;
unsigned int var_6 = 3403274184U;
short var_7 = (short)31768;
unsigned short var_8 = (unsigned short)42588;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)22800;
unsigned short var_12 = (unsigned short)5192;
int zero = 0;
int var_13 = 128509286;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)214;
short var_16 = (short)892;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
