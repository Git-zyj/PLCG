#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57013;
short var_2 = (short)-30159;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-19568;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)41926;
short var_12 = (short)10432;
signed char var_13 = (signed char)-50;
int zero = 0;
signed char var_15 = (signed char)121;
int var_16 = -1583286570;
void init() {
}

void checksum() {
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
