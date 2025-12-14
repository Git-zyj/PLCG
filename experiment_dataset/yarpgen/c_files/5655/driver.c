#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33673;
unsigned short var_2 = (unsigned short)6860;
unsigned long long int var_3 = 1138484303476197544ULL;
unsigned short var_4 = (unsigned short)40754;
unsigned char var_5 = (unsigned char)112;
short var_9 = (short)10393;
short var_11 = (short)-25633;
unsigned short var_12 = (unsigned short)45143;
int zero = 0;
unsigned short var_15 = (unsigned short)25987;
short var_16 = (short)-16566;
unsigned short var_17 = (unsigned short)10385;
short var_18 = (short)-10863;
unsigned short var_19 = (unsigned short)17000;
unsigned short arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)55395;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
