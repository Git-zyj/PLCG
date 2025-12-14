#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30353;
long long int var_1 = 8794615716275848725LL;
long long int var_2 = 7931961751201380513LL;
long long int var_5 = -6728204742590551769LL;
unsigned long long int var_8 = 14588049152212984697ULL;
unsigned long long int var_11 = 13025349644767089152ULL;
int var_12 = -1521727581;
int zero = 0;
unsigned char var_13 = (unsigned char)93;
unsigned long long int var_14 = 9666139041927316691ULL;
unsigned int var_15 = 1870767340U;
long long int var_16 = 5527240855164123417LL;
unsigned int var_17 = 2219971179U;
long long int arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 4567923596119413040LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
