#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned short var_1 = (unsigned short)5838;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1335351151U;
unsigned int var_4 = 2965929711U;
short var_5 = (short)-3680;
unsigned long long int var_6 = 1995779619720778629ULL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -9067471541048354416LL;
unsigned short var_9 = (unsigned short)10201;
int zero = 0;
long long int var_10 = -5408038129727618074LL;
unsigned short var_11 = (unsigned short)47988;
int var_12 = 978096755;
unsigned long long int var_13 = 4008606579306147348ULL;
short var_14 = (short)-15129;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)58;
int var_17 = -811929005;
unsigned int var_18 = 3931551537U;
int var_19 = -1805121530;
long long int var_20 = 5299520431514229803LL;
int var_21 = 1327163248;
unsigned char arr_0 [11] [11] ;
signed char arr_1 [11] ;
_Bool arr_4 [13] ;
int arr_5 [13] ;
signed char arr_7 [10] ;
long long int arr_8 [10] ;
long long int arr_2 [11] ;
long long int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -869101871;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 8300679168955026738LL : 5777389435714141275LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -8076042717093011826LL : -4397377840291371744LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -6536302095326948818LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
