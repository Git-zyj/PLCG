#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44598;
unsigned char var_3 = (unsigned char)58;
signed char var_4 = (signed char)34;
short var_5 = (short)-2774;
int var_6 = 838033463;
unsigned char var_9 = (unsigned char)138;
_Bool var_14 = (_Bool)0;
short var_15 = (short)25172;
long long int var_16 = 1203904453858221690LL;
unsigned char var_17 = (unsigned char)191;
unsigned long long int var_18 = 5404721225634098857ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)211;
unsigned short var_20 = (unsigned short)25762;
signed char var_21 = (signed char)-59;
unsigned short var_22 = (unsigned short)26511;
int var_23 = 1521453296;
unsigned int var_24 = 3407811818U;
unsigned int var_25 = 1007326281U;
unsigned short var_26 = (unsigned short)9496;
unsigned short arr_1 [13] ;
unsigned short arr_5 [16] [16] [16] ;
short arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)4665;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)50858;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-31836 : (short)-1119;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
