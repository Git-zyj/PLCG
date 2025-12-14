#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30567;
unsigned short var_1 = (unsigned short)49214;
signed char var_3 = (signed char)100;
unsigned char var_4 = (unsigned char)130;
unsigned short var_5 = (unsigned short)61458;
unsigned long long int var_6 = 1737750635247708170ULL;
short var_7 = (short)31242;
unsigned int var_8 = 3864314925U;
int zero = 0;
unsigned char var_11 = (unsigned char)240;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
