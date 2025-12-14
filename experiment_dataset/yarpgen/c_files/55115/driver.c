#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8181306172197144142LL;
long long int var_1 = 2216826975956943501LL;
short var_2 = (short)-15679;
unsigned long long int var_3 = 7696361102012712572ULL;
long long int var_4 = 2801601694495279189LL;
short var_5 = (short)-32660;
unsigned short var_6 = (unsigned short)18348;
short var_9 = (short)19941;
long long int var_10 = -2187555152406518661LL;
signed char var_11 = (signed char)-23;
unsigned long long int var_14 = 4518521997400279241ULL;
int zero = 0;
unsigned long long int var_15 = 8503292539049959023ULL;
long long int var_16 = 8202146207908211982LL;
long long int var_17 = -4834322663987158084LL;
short var_18 = (short)-21780;
unsigned long long int arr_2 [18] [18] ;
long long int arr_4 [18] [18] [18] ;
long long int arr_6 [18] ;
unsigned short arr_7 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 3617017989158680878ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -4336160650371247499LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 5247449503804786495LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33316;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
