#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
short var_4 = (short)2475;
signed char var_5 = (signed char)21;
unsigned short var_6 = (unsigned short)58212;
unsigned long long int var_8 = 2040885160910565947ULL;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-120;
short var_14 = (short)32209;
_Bool var_15 = (_Bool)1;
int var_16 = 1688239370;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-8365;
void init() {
}

void checksum() {
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
