#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
unsigned long long int var_2 = 10234495171155565398ULL;
long long int var_4 = -8563435238462403874LL;
unsigned char var_5 = (unsigned char)243;
signed char var_6 = (signed char)-121;
signed char var_8 = (signed char)55;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5229322482683318033LL;
unsigned char var_13 = (unsigned char)123;
unsigned short var_14 = (unsigned short)1206;
int zero = 0;
unsigned int var_15 = 3529139421U;
short var_16 = (short)28380;
unsigned long long int var_17 = 5907140312851383293ULL;
signed char var_18 = (signed char)-93;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1320158167U;
signed char var_21 = (signed char)-48;
signed char var_22 = (signed char)22;
unsigned short arr_0 [17] ;
long long int arr_1 [17] ;
signed char arr_5 [17] ;
unsigned long long int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)34781;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2477718045623168592LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 8418339764492349233ULL;
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
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
