#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
unsigned short var_3 = (unsigned short)5;
unsigned short var_8 = (unsigned short)20706;
unsigned long long int var_9 = 12003621402559439902ULL;
unsigned long long int var_10 = 10741327275397307128ULL;
signed char var_13 = (signed char)-34;
int zero = 0;
long long int var_18 = 6946904194595472536LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-21721;
unsigned char var_21 = (unsigned char)198;
short var_22 = (short)10349;
unsigned long long int arr_0 [25] ;
long long int arr_1 [25] ;
unsigned long long int arr_2 [25] [25] ;
short arr_4 [25] ;
unsigned char arr_6 [25] [25] [25] ;
long long int arr_7 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 4854252191184478145ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -7743746038851040052LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3924015345385755206ULL : 6009554937028915880ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)21419;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -7225530300336259166LL : 782944788149365892LL;
}

void checksum() {
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
