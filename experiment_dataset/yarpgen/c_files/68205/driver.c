#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1874866120;
unsigned long long int var_3 = 7861272186776605388ULL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)21624;
unsigned char var_9 = (unsigned char)125;
unsigned int var_11 = 1257760723U;
short var_13 = (short)28989;
int zero = 0;
long long int var_15 = 3196139719698252085LL;
long long int var_16 = -1290816181284974251LL;
int var_17 = -807710821;
unsigned short var_18 = (unsigned short)32361;
long long int var_19 = 4821283782263217514LL;
int var_20 = -1418350598;
unsigned char var_21 = (unsigned char)78;
long long int arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned char arr_2 [18] [18] ;
short arr_4 [14] [14] ;
unsigned int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 8853939825888837404LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)57527;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-855;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 3072025035U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
