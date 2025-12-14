#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
signed char var_1 = (signed char)68;
unsigned short var_2 = (unsigned short)17332;
unsigned char var_3 = (unsigned char)247;
unsigned long long int var_4 = 7030274783152155767ULL;
unsigned long long int var_6 = 8440177646811435502ULL;
unsigned char var_9 = (unsigned char)124;
int zero = 0;
short var_11 = (short)-11106;
signed char var_12 = (signed char)-12;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
