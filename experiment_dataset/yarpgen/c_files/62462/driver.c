#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_7 = 284601961U;
unsigned long long int var_9 = 5715781781957176636ULL;
int var_15 = -1769789864;
int zero = 0;
long long int var_19 = -1989889752983579509LL;
unsigned long long int var_20 = 2998488340473248475ULL;
int var_21 = -950636392;
unsigned long long int var_22 = 8669641431853589081ULL;
unsigned long long int var_23 = 9601588731522339184ULL;
long long int arr_0 [12] [12] ;
unsigned short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -7059528524487280711LL : 5011745484827775235LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)22094;
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
