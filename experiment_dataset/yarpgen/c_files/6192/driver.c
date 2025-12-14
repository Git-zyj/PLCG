#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1431299584U;
unsigned char var_1 = (unsigned char)53;
unsigned long long int var_2 = 3521603126689408612ULL;
long long int var_3 = 2352594997296327149LL;
unsigned int var_4 = 2020425776U;
long long int var_6 = -1383671143683133452LL;
unsigned char var_7 = (unsigned char)109;
unsigned long long int var_8 = 4186257968230281250ULL;
unsigned short var_9 = (unsigned short)46418;
long long int var_10 = 2266898311508503378LL;
int var_11 = -12770953;
unsigned int var_13 = 3525354331U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)38754;
unsigned short var_16 = (unsigned short)18117;
signed char var_17 = (signed char)122;
int zero = 0;
unsigned short var_18 = (unsigned short)30287;
unsigned long long int var_19 = 6670712082318407160ULL;
long long int var_20 = -2781005585518836028LL;
unsigned int var_21 = 3156473611U;
long long int var_22 = 8700878367207605434LL;
unsigned char var_23 = (unsigned char)75;
unsigned long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 7947788192464007841ULL;
}

void checksum() {
    hash(&seed, var_18);
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
