#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11901436101459002535ULL;
short var_4 = (short)-24579;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-29281;
short var_9 = (short)26024;
short var_11 = (short)280;
int var_12 = 1570520341;
short var_14 = (short)-27017;
short var_16 = (short)-3916;
short var_18 = (short)-2260;
int zero = 0;
int var_19 = 1906488612;
unsigned int var_20 = 349859832U;
unsigned long long int var_21 = 2256969390466395083ULL;
short var_22 = (short)26843;
short var_23 = (short)-25031;
short var_24 = (short)20326;
unsigned int var_25 = 3608691702U;
short var_26 = (short)-28525;
unsigned int arr_2 [20] ;
int arr_3 [20] ;
_Bool arr_7 [20] [20] [20] [20] ;
unsigned long long int arr_9 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 69683855U : 1466337184U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -1988421990;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 8712409097516095215ULL;
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
