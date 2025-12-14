#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43231;
unsigned char var_2 = (unsigned char)230;
unsigned short var_3 = (unsigned short)54908;
long long int var_4 = 8952278051930748801LL;
unsigned char var_5 = (unsigned char)203;
long long int var_11 = -6050966159003176770LL;
int zero = 0;
unsigned char var_12 = (unsigned char)50;
long long int var_13 = -4570547061922106214LL;
unsigned char var_14 = (unsigned char)147;
unsigned short var_15 = (unsigned short)49352;
long long int var_16 = -3965527350109283563LL;
long long int var_17 = 1067956637180103974LL;
long long int var_18 = -734481168679679782LL;
unsigned char var_19 = (unsigned char)185;
unsigned char var_20 = (unsigned char)149;
long long int var_21 = -7617262663484669270LL;
unsigned char var_22 = (unsigned char)161;
long long int var_23 = 3274654660560770443LL;
unsigned short var_24 = (unsigned short)51232;
unsigned short var_25 = (unsigned short)17024;
unsigned short var_26 = (unsigned short)17076;
unsigned short var_27 = (unsigned short)53616;
unsigned char var_28 = (unsigned char)209;
long long int arr_0 [16] ;
long long int arr_2 [16] ;
unsigned short arr_3 [16] [16] ;
unsigned short arr_6 [16] [16] [16] ;
unsigned char arr_7 [16] ;
unsigned char arr_8 [16] ;
long long int arr_17 [16] [16] [16] [16] ;
unsigned short arr_20 [17] ;
long long int arr_21 [17] [17] ;
unsigned char arr_19 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -7423475839347220577LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 5589417932071442515LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)20585;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)30804;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4104028317438807337LL : -7131291442559926849LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (unsigned short)22185;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = 3373402261870212638LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)201 : (unsigned char)81;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
