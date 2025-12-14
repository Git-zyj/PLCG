#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13633186722293915665ULL;
unsigned long long int var_2 = 11593348106205162566ULL;
unsigned short var_3 = (unsigned short)21439;
long long int var_4 = -9207143220093658056LL;
unsigned long long int var_6 = 10250153581075364658ULL;
unsigned long long int var_7 = 7336976488380266061ULL;
unsigned char var_8 = (unsigned char)120;
long long int var_9 = 4810303871203138622LL;
int zero = 0;
int var_10 = 1860801683;
long long int var_11 = 4899286597743197252LL;
signed char var_12 = (signed char)15;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-52;
unsigned int var_15 = 3025037485U;
unsigned short var_16 = (unsigned short)2725;
unsigned int var_17 = 2931123557U;
unsigned long long int var_18 = 15570019790138535210ULL;
short var_19 = (short)-27621;
long long int var_20 = 4733366207329398450LL;
unsigned long long int var_21 = 7690692713807693989ULL;
long long int var_22 = -8139647905242484942LL;
unsigned long long int var_23 = 3846139381346588574ULL;
unsigned long long int var_24 = 17550457770647195034ULL;
long long int arr_0 [18] [18] ;
short arr_6 [18] ;
long long int arr_7 [18] ;
unsigned long long int arr_8 [18] [18] [18] ;
long long int arr_10 [18] [18] [18] [18] ;
_Bool arr_11 [18] [18] [18] ;
long long int arr_12 [18] [18] [18] [18] ;
unsigned long long int arr_21 [18] ;
unsigned long long int arr_13 [18] [18] [18] ;
int arr_16 [18] ;
signed char arr_20 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 209611459519595875LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)16611 : (short)-27895;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 6957388689111104711LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 12767022785283871772ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -8626997741311315207LL : -250956594056942141LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8777664549309623086LL : -6286904412396443796LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 12144814220020464449ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8178983164169051709ULL : 10756120450107314572ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1204008620 : 1122967927;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)28 : (signed char)-40;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
