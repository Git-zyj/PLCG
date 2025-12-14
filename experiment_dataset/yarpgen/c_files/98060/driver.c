#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)79;
unsigned short var_2 = (unsigned short)48634;
unsigned long long int var_3 = 6649919433143079579ULL;
long long int var_4 = 5876815865927963315LL;
signed char var_5 = (signed char)118;
unsigned short var_6 = (unsigned short)29900;
unsigned short var_7 = (unsigned short)63180;
long long int var_12 = -6636016602861286733LL;
long long int var_14 = 589514483586108842LL;
unsigned int var_16 = 1429065063U;
unsigned long long int var_17 = 7754920735252480530ULL;
short var_18 = (short)-18934;
int zero = 0;
short var_19 = (short)27434;
long long int var_20 = -7063761181585977643LL;
unsigned long long int var_21 = 7402354268768589568ULL;
unsigned long long int var_22 = 3659995620222810576ULL;
unsigned int var_23 = 4083181875U;
signed char var_24 = (signed char)-120;
unsigned short var_25 = (unsigned short)37949;
long long int var_26 = 8660667664081119772LL;
short var_27 = (short)17894;
_Bool var_28 = (_Bool)1;
int var_29 = -91339811;
unsigned short arr_6 [17] [17] [17] ;
unsigned short arr_7 [17] [17] [17] [17] [17] ;
unsigned long long int arr_8 [17] ;
unsigned int arr_10 [18] [18] ;
int arr_11 [18] [18] ;
signed char arr_9 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)4918;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)27410;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 14303588622770763464ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 562178197U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = -1452717344;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-13 : (signed char)-42;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
