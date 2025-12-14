#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11870253034514028344ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 1758154126809657379ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 9861527421105703307ULL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2630111345629975707ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1821667938001817348ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_2 [17] [17] [17] ;
unsigned long long int arr_3 [17] [17] ;
_Bool arr_4 [17] ;
_Bool arr_5 [17] ;
unsigned long long int arr_8 [12] ;
unsigned long long int arr_9 [12] ;
unsigned long long int arr_6 [17] ;
_Bool arr_7 [17] ;
_Bool arr_11 [12] ;
unsigned long long int arr_12 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 6390350410800953703ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 9770890774799622971ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 7290535409021826206ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 1923376026984539549ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2277765157905256660ULL : 16728695629607374377ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 12225507003577710680ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 9445497764099488660ULL : 9990210257726956364ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
