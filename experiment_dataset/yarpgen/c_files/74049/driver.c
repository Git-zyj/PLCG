#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 533003591855084536LL;
unsigned long long int var_4 = 4858801305973254408ULL;
long long int var_6 = 1965208189498891508LL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-26;
int zero = 0;
unsigned short var_13 = (unsigned short)19994;
unsigned char var_14 = (unsigned char)164;
long long int var_15 = -6767414871352569042LL;
long long int var_16 = 2297939662863753579LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 9916761044654398069ULL;
_Bool var_19 = (_Bool)1;
int arr_0 [22] ;
short arr_4 [22] [22] [22] ;
long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1605125574;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)6719;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7735942986633257761LL : 4913576604648621226LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
