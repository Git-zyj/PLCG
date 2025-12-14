#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18438512868884655856ULL;
long long int var_1 = 8903642105642967249LL;
unsigned int var_3 = 4232121494U;
unsigned long long int var_4 = 464886752078559316ULL;
unsigned long long int var_5 = 15437090134620840973ULL;
unsigned int var_11 = 3814957067U;
unsigned short var_13 = (unsigned short)48282;
unsigned long long int var_15 = 15339748954367903752ULL;
unsigned long long int var_17 = 5923364841139676493ULL;
unsigned long long int var_18 = 15006598328473756668ULL;
int zero = 0;
short var_19 = (short)-8876;
unsigned long long int var_20 = 16561095573051949472ULL;
signed char var_21 = (signed char)57;
unsigned short var_22 = (unsigned short)20897;
signed char var_23 = (signed char)-101;
_Bool arr_2 [12] ;
short arr_5 [12] ;
_Bool arr_6 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)31777;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
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
