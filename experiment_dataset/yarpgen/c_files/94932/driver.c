#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2585;
unsigned short var_2 = (unsigned short)64449;
unsigned char var_3 = (unsigned char)130;
int var_5 = -310019792;
unsigned char var_6 = (unsigned char)69;
unsigned long long int var_7 = 3856044893630080340ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)41998;
short var_11 = (short)-11751;
int zero = 0;
unsigned long long int var_12 = 5315591902409708401ULL;
unsigned long long int var_13 = 6441930309284332120ULL;
void init() {
}

void checksum() {
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
