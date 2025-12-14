#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned short var_2 = (unsigned short)10290;
unsigned long long int var_4 = 14216437874231129794ULL;
unsigned short var_5 = (unsigned short)30738;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-26536;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-19;
unsigned long long int var_12 = 7852655063642231492ULL;
int zero = 0;
short var_14 = (short)-5792;
short var_15 = (short)-10032;
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
