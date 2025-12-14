#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1353187670;
unsigned short var_2 = (unsigned short)20312;
signed char var_4 = (signed char)-25;
int var_5 = -921738458;
short var_9 = (short)5934;
unsigned long long int var_11 = 5775868483781566422ULL;
int zero = 0;
unsigned long long int var_14 = 11182724092043307440ULL;
unsigned long long int var_15 = 12092668666811432782ULL;
signed char var_16 = (signed char)-18;
unsigned long long int var_17 = 2478248324795407850ULL;
unsigned long long int var_18 = 16093926359445805522ULL;
long long int var_19 = -8504504116589606657LL;
signed char var_20 = (signed char)-95;
int var_21 = 747335340;
unsigned long long int var_22 = 12550141370577606380ULL;
long long int var_23 = -5955371909419963827LL;
unsigned long long int var_24 = 12425644429841791091ULL;
_Bool var_25 = (_Bool)1;
long long int arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
unsigned char arr_2 [16] ;
int arr_3 [16] ;
_Bool arr_5 [16] [16] [16] ;
unsigned long long int arr_10 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -4572400698764195145LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 710638239429316755ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 876934700;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 16035666365862956534ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
