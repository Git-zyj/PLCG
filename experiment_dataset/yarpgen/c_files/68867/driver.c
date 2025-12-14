#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6290840562295419480LL;
long long int var_1 = 1761148295668901385LL;
long long int var_2 = -2895134836537606426LL;
long long int var_3 = -8787705414798111698LL;
int var_4 = -1916718866;
long long int var_5 = -7787205445815520820LL;
long long int var_6 = 913727721361015267LL;
long long int var_7 = -893536168590961978LL;
int var_10 = -2119530708;
int zero = 0;
long long int var_13 = 2812304823577506215LL;
int var_14 = -1964895001;
int var_15 = 118602649;
unsigned char var_16 = (unsigned char)195;
long long int var_17 = 540310685589280696LL;
long long int var_18 = 2153363008943148923LL;
long long int var_19 = -938580800984068002LL;
long long int var_20 = -3313740240244250948LL;
long long int var_21 = -4935216703375867907LL;
long long int arr_0 [11] [11] ;
long long int arr_1 [11] ;
long long int arr_3 [11] ;
long long int arr_4 [11] [11] [11] ;
unsigned char arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -2860268885666286237LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -7543099240796105904LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1134760386445788473LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 360009134982808859LL : 7614902691935911470LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)9;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
