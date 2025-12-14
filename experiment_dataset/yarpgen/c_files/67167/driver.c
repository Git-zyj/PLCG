#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2858113578U;
unsigned short var_11 = (unsigned short)39034;
unsigned long long int var_16 = 17841921658457669109ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)101;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)18;
unsigned int var_22 = 710079096U;
int var_23 = 1950642872;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 8764238953177743039ULL;
unsigned long long int var_26 = 14316048801650138378ULL;
signed char var_27 = (signed char)-50;
unsigned char arr_2 [12] ;
unsigned long long int arr_3 [12] [12] ;
unsigned int arr_6 [12] [12] [12] ;
int arr_7 [12] [12] [12] [12] ;
unsigned int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 7851834513626853758ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1329545182U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 688040783;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 2311395562U;
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
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
