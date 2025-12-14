#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38680;
long long int var_1 = -8091379873902257687LL;
short var_2 = (short)-4536;
unsigned short var_4 = (unsigned short)61215;
int var_5 = -363573813;
long long int var_7 = -3670340690155996430LL;
short var_8 = (short)26869;
unsigned long long int var_9 = 3715857351209794461ULL;
short var_10 = (short)-22481;
unsigned short var_13 = (unsigned short)45320;
int zero = 0;
unsigned int var_15 = 836586675U;
unsigned long long int var_16 = 14218191295754090861ULL;
unsigned long long int var_17 = 13207783483466087613ULL;
unsigned long long int var_18 = 13260426480142028346ULL;
signed char var_19 = (signed char)-43;
unsigned short var_20 = (unsigned short)13951;
short var_21 = (short)21910;
unsigned short var_22 = (unsigned short)38802;
unsigned short var_23 = (unsigned short)16404;
unsigned int var_24 = 975105436U;
int var_25 = 121798358;
unsigned short var_26 = (unsigned short)1601;
unsigned long long int var_27 = 6368785408036671720ULL;
unsigned int arr_3 [13] ;
unsigned short arr_4 [13] [13] [13] [13] ;
unsigned int arr_7 [18] ;
signed char arr_8 [18] [18] ;
_Bool arr_9 [16] ;
signed char arr_10 [16] [16] ;
signed char arr_12 [16] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_13 [16] ;
int arr_14 [16] [16] ;
int arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 3181853975U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)63858 : (unsigned short)32268;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 3553885556U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3269539910254664932ULL : 15786338888811760553ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 2807199687939029392ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = -2024395107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 1853196069;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
