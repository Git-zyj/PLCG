#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61081;
unsigned long long int var_4 = 4481629600203466572ULL;
int var_6 = -2029005872;
unsigned int var_7 = 3282899155U;
short var_9 = (short)11260;
int var_10 = -1000056123;
short var_13 = (short)-16580;
int var_14 = 1297868139;
int var_15 = -719319985;
int var_16 = 1466837790;
int zero = 0;
unsigned long long int var_18 = 16422840926482878017ULL;
int var_19 = 474055502;
int var_20 = 487451259;
short var_21 = (short)-25938;
signed char var_22 = (signed char)104;
signed char var_23 = (signed char)-99;
long long int var_24 = 7473755779325365667LL;
long long int var_25 = -290656896233236858LL;
long long int var_26 = -1394969366118591934LL;
int arr_3 [12] ;
signed char arr_5 [12] [12] [12] ;
unsigned short arr_8 [12] ;
int arr_9 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 447114285 : -2031549948;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)118 : (signed char)-74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned short)61674;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 853230994;
}

void checksum() {
    hash(&seed, var_18);
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
