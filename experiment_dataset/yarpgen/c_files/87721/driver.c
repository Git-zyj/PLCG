#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1109650135284464774LL;
unsigned long long int var_1 = 13441289746837737383ULL;
unsigned char var_2 = (unsigned char)183;
unsigned short var_3 = (unsigned short)38341;
short var_4 = (short)8058;
int var_6 = 1110744969;
int var_7 = 307644297;
unsigned long long int var_10 = 197998981222142601ULL;
int zero = 0;
short var_12 = (short)-10690;
unsigned long long int var_13 = 17723656106096934494ULL;
unsigned int var_14 = 3350005401U;
void init() {
}

void checksum() {
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
