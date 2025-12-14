#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1327649708;
unsigned char var_2 = (unsigned char)47;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)46657;
unsigned char var_7 = (unsigned char)101;
unsigned long long int var_8 = 3905133149090967725ULL;
unsigned short var_12 = (unsigned short)45481;
int var_13 = 674657823;
int zero = 0;
unsigned int var_15 = 1778188568U;
unsigned int var_16 = 2787426114U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-24926;
unsigned long long int var_19 = 1187525782519484915ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
