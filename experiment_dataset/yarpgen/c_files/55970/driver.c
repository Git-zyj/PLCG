#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28911;
short var_3 = (short)-19050;
signed char var_4 = (signed char)97;
unsigned short var_5 = (unsigned short)51898;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_11 = (short)32352;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)34458;
signed char var_14 = (signed char)-43;
long long int var_15 = 4134724673166946165LL;
unsigned char var_16 = (unsigned char)139;
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
