#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5089;
int zero = 0;
unsigned long long int var_19 = 879119767554416315ULL;
short var_20 = (short)-13177;
int var_21 = 2033904048;
long long int var_22 = -5777973405216221868LL;
_Bool var_23 = (_Bool)0;
long long int var_24 = -8643650617161103086LL;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 639709910U;
int var_27 = -1732268724;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)50063;
short var_30 = (short)16252;
signed char var_31 = (signed char)-117;
_Bool var_32 = (_Bool)0;
unsigned int var_33 = 3933310853U;
unsigned long long int var_34 = 6569683085118000065ULL;
unsigned int var_35 = 1036751505U;
int var_36 = 1212173587;
unsigned short var_37 = (unsigned short)19759;
_Bool var_38 = (_Bool)0;
short var_39 = (short)636;
unsigned short var_40 = (unsigned short)20258;
short var_41 = (short)877;
unsigned long long int var_42 = 12179472436232696128ULL;
short arr_3 [17] ;
signed char arr_4 [17] ;
short arr_5 [17] ;
unsigned char arr_29 [17] [17] [17] [17] ;
unsigned short arr_35 [17] [17] [17] [17] ;
int arr_42 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-24375;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-14514;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned short)20683;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_42 [i_0] = -1690480495;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
