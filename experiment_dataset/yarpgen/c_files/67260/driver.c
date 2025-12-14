#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 872779349;
short var_3 = (short)-22382;
short var_6 = (short)-24126;
int var_7 = -1049879139;
int var_9 = 1880003373;
unsigned int var_11 = 163755035U;
int var_13 = -2031945602;
unsigned char var_17 = (unsigned char)208;
int zero = 0;
unsigned short var_19 = (unsigned short)14165;
unsigned long long int var_20 = 2674524344086305768ULL;
signed char var_21 = (signed char)-23;
unsigned short var_22 = (unsigned short)23324;
unsigned long long int var_23 = 16232504413122514301ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
