#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1429842257729020506LL;
int var_3 = 990498640;
signed char var_6 = (signed char)38;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 486626225;
long long int var_16 = 9173823326430221584LL;
unsigned short var_17 = (unsigned short)15579;
unsigned short var_18 = (unsigned short)30051;
signed char var_19 = (signed char)-85;
int var_20 = -469661118;
unsigned short var_21 = (unsigned short)33457;
_Bool var_22 = (_Bool)1;
signed char arr_1 [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_6 [22] [22] [22] ;
unsigned char arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 881687447U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)38401;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)71;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
