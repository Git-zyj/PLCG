#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned long long int var_3 = 16885105263476794140ULL;
unsigned short var_5 = (unsigned short)26142;
signed char var_6 = (signed char)-53;
unsigned char var_7 = (unsigned char)171;
int var_8 = 2081308639;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2019309108U;
unsigned short var_13 = (unsigned short)31018;
unsigned short var_14 = (unsigned short)14097;
unsigned char var_15 = (unsigned char)32;
unsigned short var_16 = (unsigned short)49391;
unsigned char var_17 = (unsigned char)180;
int var_18 = -718427930;
int zero = 0;
unsigned short var_19 = (unsigned short)44527;
short var_20 = (short)19417;
_Bool var_21 = (_Bool)1;
long long int var_22 = 7961320822021642820LL;
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
