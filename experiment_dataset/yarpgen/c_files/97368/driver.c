#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24024;
unsigned char var_11 = (unsigned char)31;
short var_12 = (short)16573;
unsigned int var_13 = 3207513194U;
signed char var_14 = (signed char)-1;
long long int var_15 = 4690539445142454593LL;
int zero = 0;
unsigned int var_16 = 494422006U;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
