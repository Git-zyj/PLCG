#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30152;
signed char var_1 = (signed char)-95;
short var_2 = (short)-1259;
int var_3 = -1999710743;
short var_4 = (short)4935;
unsigned long long int var_5 = 15790823526115286362ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)32;
int var_9 = -338462496;
int zero = 0;
unsigned char var_10 = (unsigned char)174;
unsigned int var_11 = 4235770777U;
unsigned short var_12 = (unsigned short)34320;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
