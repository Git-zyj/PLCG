#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10860842140204359501ULL;
unsigned char var_4 = (unsigned char)131;
unsigned short var_6 = (unsigned short)18942;
short var_7 = (short)-6087;
long long int var_9 = 4314798485330301153LL;
unsigned char var_10 = (unsigned char)112;
unsigned char var_11 = (unsigned char)26;
short var_14 = (short)17432;
long long int var_15 = -9099964202087880125LL;
unsigned int var_16 = 996372251U;
unsigned long long int var_18 = 17544406285246673064ULL;
int zero = 0;
signed char var_19 = (signed char)-94;
unsigned char var_20 = (unsigned char)202;
unsigned short var_21 = (unsigned short)15376;
long long int var_22 = 3499949482396812493LL;
int var_23 = 927905358;
unsigned char var_24 = (unsigned char)209;
unsigned char var_25 = (unsigned char)107;
unsigned short var_26 = (unsigned short)53148;
short arr_0 [22] ;
signed char arr_1 [22] ;
unsigned char arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
unsigned char arr_5 [10] [10] ;
unsigned char arr_6 [10] [10] ;
short arr_10 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)28280;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)52635;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)27346;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
