#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
long long int var_1 = 6599809767549994571LL;
int var_3 = -1779877989;
unsigned char var_5 = (unsigned char)29;
unsigned int var_8 = 1121526042U;
int var_12 = 151959597;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
signed char var_14 = (signed char)-1;
unsigned long long int var_15 = 3890530270886206950ULL;
unsigned short var_16 = (unsigned short)23322;
unsigned short var_17 = (unsigned short)59981;
unsigned short var_18 = (unsigned short)32227;
int var_19 = 2004354679;
unsigned char var_20 = (unsigned char)138;
_Bool var_21 = (_Bool)1;
unsigned char arr_1 [17] ;
unsigned int arr_2 [17] [17] ;
unsigned short arr_5 [25] ;
unsigned char arr_6 [25] [25] ;
int arr_8 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 629277560U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)14277;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1401826725;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
