#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4874374869117537470ULL;
int var_2 = 1570515373;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)32669;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 10502586486340243063ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)158;
signed char var_16 = (signed char)-54;
short var_17 = (short)-4370;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
