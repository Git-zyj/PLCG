#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
_Bool var_1 = (_Bool)1;
int var_4 = -1422849241;
unsigned char var_7 = (unsigned char)163;
unsigned char var_8 = (unsigned char)242;
unsigned long long int var_10 = 3564767532329340798ULL;
unsigned long long int var_15 = 16330321813089026758ULL;
int zero = 0;
signed char var_20 = (signed char)51;
short var_21 = (short)-17030;
int var_22 = -1334657371;
long long int var_23 = 7275741241386976394LL;
short var_24 = (short)19595;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 3595736120533451768ULL;
int var_28 = 1984081954;
unsigned long long int var_29 = 12142994212164983920ULL;
unsigned long long int arr_0 [20] ;
long long int arr_1 [20] [20] ;
unsigned int arr_4 [20] [20] ;
long long int arr_11 [20] [20] [20] ;
_Bool arr_13 [20] [20] [20] [20] [20] [20] ;
int arr_15 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7193481049850570170ULL : 11780070642181873640ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -3536745383019276045LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1604010997U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -8120629026731551305LL : -2676921936494165877LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = -620029714;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
