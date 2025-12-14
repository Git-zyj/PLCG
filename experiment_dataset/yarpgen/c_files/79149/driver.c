#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4307394514439187947LL;
unsigned short var_5 = (unsigned short)30572;
signed char var_8 = (signed char)-75;
signed char var_11 = (signed char)-79;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 9381463047320652178ULL;
unsigned long long int var_19 = 16176811022086139966ULL;
signed char var_20 = (signed char)-121;
long long int var_21 = 6869796921324068997LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 15170467014358557359ULL;
unsigned short var_24 = (unsigned short)38905;
_Bool var_25 = (_Bool)1;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_3 [14] ;
signed char arr_11 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 5497617867355408439ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3516753823534828645ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-103;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
