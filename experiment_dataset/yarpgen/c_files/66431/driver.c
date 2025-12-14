#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30479;
int var_3 = 708483934;
long long int var_7 = -8699063667127039688LL;
unsigned short var_9 = (unsigned short)42615;
short var_10 = (short)-10004;
signed char var_12 = (signed char)-11;
short var_14 = (short)4915;
int zero = 0;
short var_15 = (short)25255;
unsigned char var_16 = (unsigned char)71;
signed char var_17 = (signed char)-122;
int var_18 = 663489371;
unsigned long long int var_19 = 4085987570410887696ULL;
short var_20 = (short)2299;
long long int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 3825666544423836361LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
