#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4634804007404981447ULL;
long long int var_2 = -2079184714265807425LL;
unsigned long long int var_4 = 13901233433721600703ULL;
short var_5 = (short)29859;
_Bool var_6 = (_Bool)1;
long long int var_9 = -3262525162341835434LL;
long long int var_10 = -734570405151958483LL;
int var_11 = 40757159;
int zero = 0;
unsigned long long int var_12 = 7157189083896741645ULL;
unsigned int var_13 = 520609960U;
long long int var_14 = -1388177159443756667LL;
unsigned int var_15 = 2199384079U;
short var_16 = (short)28084;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 4099156783075324417ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2994224166U;
unsigned char arr_0 [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 16143548113524727192ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 8197883594019801264ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
