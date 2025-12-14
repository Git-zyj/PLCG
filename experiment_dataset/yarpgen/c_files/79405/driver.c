#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-35;
short var_3 = (short)-5916;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)46010;
signed char var_9 = (signed char)-67;
int var_11 = 1866404255;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = -1205397952;
unsigned short var_16 = (unsigned short)40311;
long long int var_17 = -6442977957950781278LL;
unsigned char var_18 = (unsigned char)139;
unsigned int var_19 = 1862685993U;
unsigned short var_20 = (unsigned short)36910;
unsigned char var_21 = (unsigned char)253;
_Bool var_22 = (_Bool)0;
int var_23 = -1456848744;
unsigned char arr_1 [17] [17] ;
unsigned char arr_3 [21] ;
unsigned int arr_4 [21] ;
unsigned char arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 529810594U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned char)230;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
