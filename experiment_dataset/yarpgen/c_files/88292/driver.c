#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14054;
signed char var_1 = (signed char)-84;
short var_2 = (short)-26460;
unsigned char var_3 = (unsigned char)145;
unsigned long long int var_4 = 6215697260967179206ULL;
unsigned short var_5 = (unsigned short)40341;
unsigned short var_6 = (unsigned short)47394;
unsigned short var_7 = (unsigned short)34648;
short var_9 = (short)-418;
unsigned short var_10 = (unsigned short)36290;
unsigned int var_11 = 724767186U;
unsigned long long int var_12 = 15344807491932001865ULL;
unsigned char var_13 = (unsigned char)110;
int zero = 0;
unsigned int var_16 = 1376596003U;
unsigned int var_17 = 931906187U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
