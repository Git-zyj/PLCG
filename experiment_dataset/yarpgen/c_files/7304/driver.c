#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14342021898971623857ULL;
unsigned long long int var_2 = 15801515131208953431ULL;
unsigned long long int var_6 = 1257755328230846915ULL;
unsigned long long int var_9 = 7714126441799091852ULL;
unsigned long long int var_14 = 17521312692854510793ULL;
unsigned long long int var_16 = 7810044811144962856ULL;
unsigned long long int var_19 = 16283497977642596960ULL;
int zero = 0;
unsigned long long int var_20 = 1637011772552945325ULL;
unsigned long long int var_21 = 8609842583244863490ULL;
unsigned long long int var_22 = 13481285328488371872ULL;
unsigned long long int var_23 = 12129973108909613885ULL;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 17551775304897494661ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 12156428634926317904ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
