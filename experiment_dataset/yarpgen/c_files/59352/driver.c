#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55117;
unsigned long long int var_2 = 5539603670608282435ULL;
long long int var_3 = -328709245149178829LL;
unsigned char var_4 = (unsigned char)216;
short var_9 = (short)-1213;
long long int var_11 = -5431772172066005507LL;
int zero = 0;
int var_12 = -1562114136;
unsigned long long int var_13 = 17238797975888972983ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 3586394903174712510ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
