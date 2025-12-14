#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1007875278;
int var_1 = -1140588049;
_Bool var_2 = (_Bool)1;
int var_3 = -1332866582;
unsigned int var_4 = 3507687369U;
unsigned int var_5 = 3887980466U;
short var_7 = (short)-29547;
unsigned int var_8 = 184995001U;
_Bool var_9 = (_Bool)1;
long long int var_10 = -7437030718853539830LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)50948;
unsigned long long int var_14 = 8049332883880886417ULL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)34538;
int zero = 0;
long long int var_19 = 7551076995888795553LL;
long long int var_20 = 2086741591483826489LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1875235504U;
_Bool var_23 = (_Bool)1;
long long int var_24 = -6887342817608506313LL;
long long int var_25 = 7572117273872505561LL;
signed char var_26 = (signed char)118;
unsigned long long int var_27 = 1446126130893594754ULL;
signed char var_28 = (signed char)73;
signed char var_29 = (signed char)-23;
unsigned long long int var_30 = 7671912065205926580ULL;
unsigned char var_31 = (unsigned char)117;
_Bool var_32 = (_Bool)0;
short var_33 = (short)-11778;
unsigned long long int var_34 = 18263931095415442150ULL;
signed char var_35 = (signed char)-52;
short var_36 = (short)-10305;
signed char arr_24 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-100 : (signed char)71;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
