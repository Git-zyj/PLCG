#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
_Bool var_1 = (_Bool)0;
int var_4 = 1450830575;
unsigned long long int var_5 = 12026384132145115141ULL;
unsigned long long int var_6 = 6944876468243475527ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-17;
int var_13 = -676295473;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-71;
unsigned char arr_0 [10] ;
_Bool arr_2 [10] [10] ;
unsigned long long int arr_3 [10] [10] [10] ;
int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3049834261279511799ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -1785278732;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
