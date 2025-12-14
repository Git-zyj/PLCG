#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5687024107987077031LL;
unsigned char var_2 = (unsigned char)110;
short var_3 = (short)-3673;
signed char var_5 = (signed char)-97;
_Bool var_6 = (_Bool)0;
int var_9 = 1468262837;
int zero = 0;
unsigned char var_11 = (unsigned char)252;
unsigned long long int var_12 = 11680039042147437126ULL;
short var_13 = (short)12442;
void init() {
}

void checksum() {
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
