#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -666017981;
int var_5 = 1748528313;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)31011;
int var_16 = 664785172;
unsigned long long int var_17 = 13141018880266857074ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 10248373798945008244ULL;
unsigned long long int var_20 = 10713895002503527910ULL;
int var_21 = -616243129;
int var_22 = 922875355;
_Bool var_23 = (_Bool)1;
int var_24 = 1597253831;
_Bool arr_5 [10] ;
unsigned char arr_6 [10] ;
int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -2088792400;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
