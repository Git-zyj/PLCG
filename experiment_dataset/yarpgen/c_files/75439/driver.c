#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2311072360U;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)30785;
int var_3 = -1480565207;
unsigned short var_4 = (unsigned short)9223;
unsigned short var_6 = (unsigned short)32294;
short var_8 = (short)-28593;
unsigned int var_11 = 2131492224U;
unsigned long long int var_14 = 17965593710380156362ULL;
long long int var_16 = 6493657612934206407LL;
short var_17 = (short)17611;
int zero = 0;
unsigned short var_19 = (unsigned short)25064;
unsigned long long int var_20 = 11463929359421677087ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3804806205U;
unsigned int var_23 = 4145798009U;
unsigned long long int var_24 = 11105059131763423440ULL;
signed char var_25 = (signed char)-9;
unsigned short var_26 = (unsigned short)30166;
short arr_0 [20] [20] ;
signed char arr_1 [20] ;
_Bool arr_2 [20] [20] ;
unsigned long long int arr_6 [15] ;
unsigned long long int arr_7 [15] ;
long long int arr_3 [20] [20] ;
unsigned long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)18622 : (short)-21177;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)50;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 2320314470792248191ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 1301370921768659314ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -3678397900197059259LL : -3048078080931516913LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 15868655452580199128ULL : 10761917368974341803ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
