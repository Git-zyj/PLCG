#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9812;
unsigned char var_1 = (unsigned char)174;
int var_2 = 117335888;
unsigned char var_3 = (unsigned char)108;
short var_4 = (short)26797;
short var_5 = (short)-14450;
signed char var_6 = (signed char)-98;
unsigned int var_7 = 1258409596U;
short var_9 = (short)32246;
int var_10 = 1639210595;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2077771007U;
unsigned short var_14 = (unsigned short)62212;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
