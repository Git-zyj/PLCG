#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9120439770430315861LL;
signed char var_4 = (signed char)110;
unsigned short var_7 = (unsigned short)60468;
signed char var_14 = (signed char)-120;
unsigned short var_15 = (unsigned short)24779;
int zero = 0;
long long int var_19 = -8152505701743302445LL;
unsigned short var_20 = (unsigned short)58394;
long long int var_21 = 1773979250117478923LL;
unsigned short var_22 = (unsigned short)56063;
signed char var_23 = (signed char)-10;
long long int var_24 = 5808585742614824821LL;
signed char var_25 = (signed char)-124;
long long int arr_1 [22] [22] ;
long long int arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -1151409320805713668LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 282982121207261985LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
