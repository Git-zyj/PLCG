#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)4;
unsigned int var_4 = 2796758445U;
unsigned int var_5 = 1391148028U;
long long int var_6 = -2932791038248049666LL;
long long int var_9 = -1625498448055148181LL;
unsigned long long int var_11 = 764659290012392077ULL;
long long int var_12 = 6540878157432732727LL;
unsigned long long int var_13 = 11295109797891523331ULL;
int zero = 0;
unsigned long long int var_17 = 966820901628606595ULL;
short var_18 = (short)10309;
unsigned char var_19 = (unsigned char)239;
signed char var_20 = (signed char)-100;
_Bool var_21 = (_Bool)1;
int var_22 = 300182740;
unsigned short var_23 = (unsigned short)50352;
_Bool var_24 = (_Bool)1;
long long int var_25 = -9100279909685056312LL;
unsigned long long int arr_1 [19] ;
long long int arr_2 [19] ;
unsigned short arr_3 [19] [19] [19] ;
_Bool arr_6 [19] [19] ;
long long int arr_10 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3265179984016414012ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 8993478147555669705LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)27159;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? -5363869306358176315LL : 1297041840037951084LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 2803504804U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
