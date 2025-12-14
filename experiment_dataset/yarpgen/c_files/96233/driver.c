#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7905676518940471723LL;
unsigned short var_3 = (unsigned short)41287;
unsigned short var_4 = (unsigned short)8587;
unsigned int var_6 = 476538174U;
unsigned int var_7 = 1919663883U;
short var_9 = (short)-1150;
int var_10 = -1583820039;
unsigned long long int var_13 = 16195044647978472796ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)32142;
unsigned char var_20 = (unsigned char)215;
unsigned short var_21 = (unsigned short)23745;
_Bool var_22 = (_Bool)1;
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
