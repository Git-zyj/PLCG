#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
short var_3 = (short)11798;
signed char var_6 = (signed char)-30;
signed char var_7 = (signed char)-107;
long long int var_9 = -2487089810213247718LL;
short var_10 = (short)-14217;
unsigned long long int var_13 = 5175409246398431430ULL;
long long int var_18 = 3738981690970431726LL;
unsigned short var_19 = (unsigned short)49517;
int zero = 0;
signed char var_20 = (signed char)-97;
unsigned char var_21 = (unsigned char)12;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
