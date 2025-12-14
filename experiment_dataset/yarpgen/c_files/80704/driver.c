#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-56;
int zero = 0;
long long int var_17 = 5466807723149329453LL;
signed char var_18 = (signed char)-93;
short var_19 = (short)3294;
int var_20 = -267717346;
signed char var_21 = (signed char)23;
short var_22 = (short)6867;
long long int var_23 = -5692366069907758740LL;
unsigned char var_24 = (unsigned char)25;
int var_25 = 1217934955;
signed char var_26 = (signed char)-87;
short arr_0 [12] [12] ;
int arr_1 [12] ;
short arr_2 [12] ;
unsigned int arr_3 [12] [12] ;
unsigned short arr_4 [12] ;
unsigned long long int arr_7 [12] ;
long long int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-20256;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1495433353;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-22171;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 1789023637U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)43230;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8834314148155910912ULL : 8142094275411185968ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -7420611621069194645LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
