#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 500793260;
short var_3 = (short)-28796;
_Bool var_5 = (_Bool)0;
unsigned long long int var_11 = 7553463755438106343ULL;
int zero = 0;
signed char var_18 = (signed char)-42;
unsigned char var_19 = (unsigned char)208;
short var_20 = (short)16300;
long long int var_21 = 8344937189189906847LL;
unsigned short var_22 = (unsigned short)27610;
long long int var_23 = 6344142090578957648LL;
unsigned int var_24 = 1367924809U;
short var_25 = (short)-8896;
unsigned char var_26 = (unsigned char)37;
_Bool var_27 = (_Bool)1;
signed char arr_1 [14] [14] ;
unsigned int arr_7 [14] [14] ;
long long int arr_8 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 2980368024U : 2722325860U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 7822044800370258149LL;
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
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
