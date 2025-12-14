#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
short var_1 = (short)-12751;
unsigned char var_8 = (unsigned char)196;
unsigned long long int var_9 = 9628384576674202650ULL;
unsigned short var_10 = (unsigned short)31562;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)21361;
unsigned short var_15 = (unsigned short)30262;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
