#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)108;
unsigned long long int var_3 = 4405404890531141626ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-10;
unsigned short var_6 = (unsigned short)51780;
unsigned char var_7 = (unsigned char)81;
unsigned short var_9 = (unsigned short)43248;
short var_11 = (short)26425;
short var_13 = (short)-23111;
unsigned short var_14 = (unsigned short)35285;
int zero = 0;
short var_16 = (short)-5777;
int var_17 = 1126515230;
unsigned short var_18 = (unsigned short)27639;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
