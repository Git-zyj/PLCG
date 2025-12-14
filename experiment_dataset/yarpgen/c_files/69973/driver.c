#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned long long int var_1 = 4708038874767007029ULL;
unsigned long long int var_2 = 4955507717802613189ULL;
unsigned long long int var_3 = 6692817627167662941ULL;
unsigned long long int var_4 = 7833627519997471082ULL;
signed char var_6 = (signed char)84;
unsigned long long int var_8 = 12409212149657133243ULL;
short var_9 = (short)24672;
long long int var_10 = -2960013889018012691LL;
int var_12 = -1108895926;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-119;
unsigned long long int var_15 = 17139898860154724762ULL;
int var_17 = 895953046;
int zero = 0;
unsigned int var_18 = 886981275U;
unsigned char var_19 = (unsigned char)153;
unsigned short var_20 = (unsigned short)54287;
unsigned char var_21 = (unsigned char)146;
signed char var_22 = (signed char)7;
short var_23 = (short)-2346;
unsigned long long int var_24 = 2568042011932527515ULL;
long long int arr_3 [13] ;
signed char arr_10 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -3839218951155237533LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)93 : (signed char)-97;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
