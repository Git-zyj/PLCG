#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)202;
unsigned char var_2 = (unsigned char)121;
unsigned short var_5 = (unsigned short)32916;
unsigned long long int var_6 = 3574280134534781369ULL;
unsigned short var_7 = (unsigned short)45608;
long long int var_8 = -1821437746455106995LL;
unsigned short var_9 = (unsigned short)39186;
short var_10 = (short)-8479;
int zero = 0;
unsigned char var_11 = (unsigned char)41;
long long int var_12 = -184984647025207359LL;
short var_13 = (short)-22936;
unsigned int var_14 = 3395920924U;
long long int var_15 = 7705207616160693559LL;
short var_16 = (short)32162;
unsigned char var_17 = (unsigned char)141;
unsigned char var_18 = (unsigned char)148;
unsigned long long int var_19 = 6314102027336143475ULL;
unsigned long long int var_20 = 15386876867053754858ULL;
long long int var_21 = 4955033416842166514LL;
unsigned int var_22 = 3930019316U;
unsigned char arr_2 [22] ;
unsigned short arr_4 [22] [22] ;
long long int arr_5 [22] [22] [22] ;
unsigned long long int arr_12 [15] [15] [15] ;
unsigned char arr_16 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)30799;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -6377248334779812891LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 8547064418851193660ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)207;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
