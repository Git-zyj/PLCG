#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1634016724;
unsigned char var_2 = (unsigned char)25;
short var_3 = (short)9030;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-10301;
signed char var_9 = (signed char)92;
int zero = 0;
int var_10 = -1897680554;
signed char var_11 = (signed char)-107;
unsigned short var_12 = (unsigned short)9275;
unsigned int var_13 = 3205222609U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
