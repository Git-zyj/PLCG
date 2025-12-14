#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10929;
unsigned short var_2 = (unsigned short)51055;
signed char var_3 = (signed char)14;
short var_4 = (short)30557;
int var_6 = -1226490846;
_Bool var_8 = (_Bool)1;
int var_9 = -771240771;
int zero = 0;
unsigned char var_10 = (unsigned char)221;
short var_11 = (short)-17411;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
