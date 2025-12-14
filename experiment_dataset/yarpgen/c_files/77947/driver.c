#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2501438918267430449ULL;
unsigned short var_3 = (unsigned short)25434;
long long int var_5 = 6725401055380695160LL;
int var_6 = -1033910672;
short var_7 = (short)-28311;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)902;
long long int var_11 = -4874739211090695975LL;
short var_12 = (short)-19600;
unsigned short var_13 = (unsigned short)3845;
unsigned int var_14 = 3572176073U;
long long int var_15 = 8256015047590585431LL;
unsigned long long int arr_0 [13] ;
short arr_1 [13] ;
long long int arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 8445617850393218567ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)32096;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2187850092704039823LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
