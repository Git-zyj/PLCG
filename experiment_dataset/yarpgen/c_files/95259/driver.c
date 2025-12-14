#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)88;
short var_5 = (short)-27326;
unsigned char var_6 = (unsigned char)90;
signed char var_11 = (signed char)-60;
unsigned short var_12 = (unsigned short)17894;
unsigned long long int var_15 = 13573556379367572640ULL;
int zero = 0;
short var_20 = (short)-3183;
short var_21 = (short)-23985;
short var_22 = (short)-5866;
int var_23 = 1734520573;
void init() {
}

void checksum() {
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
