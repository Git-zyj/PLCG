#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)50;
unsigned long long int var_9 = 2518686653874322743ULL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)21289;
int zero = 0;
unsigned long long int var_15 = 10739111774424915479ULL;
unsigned int var_16 = 289531913U;
short var_17 = (short)10458;
unsigned char var_18 = (unsigned char)95;
long long int var_19 = 5118744215125885086LL;
unsigned int var_20 = 3362179964U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned int arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
unsigned short arr_2 [17] ;
unsigned int arr_4 [17] ;
unsigned char arr_6 [17] ;
unsigned long long int arr_8 [14] ;
_Bool arr_13 [14] [14] [14] ;
long long int arr_15 [14] ;
unsigned char arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3642077809U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 991658031U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)52214;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 834872766U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 8349282068871531602ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = -7514388377716638378LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)198;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
