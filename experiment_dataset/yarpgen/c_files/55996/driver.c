#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 275620573111233925LL;
signed char var_3 = (signed char)75;
short var_8 = (short)-6586;
signed char var_10 = (signed char)-78;
long long int var_15 = -3256123290919291281LL;
unsigned long long int var_16 = 6519620479615284285ULL;
int zero = 0;
signed char var_18 = (signed char)38;
unsigned short var_19 = (unsigned short)58842;
unsigned short var_20 = (unsigned short)51142;
short var_21 = (short)27567;
unsigned short var_22 = (unsigned short)19599;
short var_23 = (short)13420;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)34584;
unsigned short arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
unsigned int arr_2 [12] ;
long long int arr_8 [12] [12] [12] [12] ;
unsigned short arr_9 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)9387;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1325687890U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 912527426U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 5116012783356380123LL : 4063868137309233610LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)38348 : (unsigned short)38027;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
