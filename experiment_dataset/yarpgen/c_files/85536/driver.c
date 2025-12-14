#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2114898318U;
signed char var_1 = (signed char)86;
unsigned int var_2 = 2016648815U;
short var_3 = (short)763;
int var_4 = 862134914;
long long int var_7 = -1457025581753978190LL;
unsigned long long int var_8 = 16633778643498979995ULL;
signed char var_9 = (signed char)68;
unsigned short var_11 = (unsigned short)64713;
_Bool var_12 = (_Bool)0;
int var_14 = -733592045;
long long int var_15 = -6219382788024005935LL;
int var_16 = -1817881705;
short var_17 = (short)12125;
int zero = 0;
long long int var_18 = -612207451057131253LL;
long long int var_19 = 3024217167734761628LL;
unsigned char var_20 = (unsigned char)247;
unsigned long long int var_21 = 3018833176468728609ULL;
unsigned long long int arr_2 [24] ;
long long int arr_8 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 188854389123327334ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7956951076270273840LL : 2302588935949186286LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
