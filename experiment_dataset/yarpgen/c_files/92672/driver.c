#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6741615262424841488LL;
int var_1 = -694424181;
long long int var_4 = -2744212563040205802LL;
long long int var_5 = -4228496351556023417LL;
int var_9 = -17362150;
long long int var_10 = 1324657802087681284LL;
unsigned short var_11 = (unsigned short)46162;
unsigned short var_12 = (unsigned short)31378;
long long int var_13 = -3862355654033394747LL;
long long int var_15 = -8673677864355032923LL;
unsigned long long int var_16 = 8292334102154894862ULL;
int zero = 0;
long long int var_18 = 5636927775207236783LL;
unsigned long long int var_19 = 18030096231273685588ULL;
long long int var_20 = -8859924368824462176LL;
long long int var_21 = 1338060965154008854LL;
unsigned short var_22 = (unsigned short)15514;
int var_23 = -389460943;
unsigned long long int var_24 = 8028315260602423887ULL;
int arr_2 [18] [18] ;
_Bool arr_4 [21] ;
unsigned long long int arr_7 [21] ;
long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -1331352890;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 188414270289404850ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 495407008627349561LL : 5574955111668014955LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
