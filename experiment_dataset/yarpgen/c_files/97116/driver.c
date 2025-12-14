#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
unsigned int var_3 = 1951441623U;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)1;
signed char var_19 = (signed char)111;
short var_20 = (short)-5319;
signed char var_21 = (signed char)78;
unsigned long long int var_22 = 4054327876282404201ULL;
unsigned int var_23 = 2628431737U;
int var_24 = -603901713;
unsigned int arr_9 [22] ;
long long int arr_12 [22] [22] [22] [22] [22] ;
signed char arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 2731738136U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 810502147706054010LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (signed char)30;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
