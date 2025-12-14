#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9027517293448680056LL;
long long int var_5 = -8532954029602969143LL;
long long int var_6 = -8646238693683656020LL;
long long int var_8 = 4144758097498365391LL;
long long int var_11 = -5276046351290743433LL;
long long int var_12 = -1986431709877975257LL;
long long int var_14 = 6386705178283017578LL;
long long int var_16 = 8637392377778952158LL;
int zero = 0;
long long int var_20 = 9018197348514151893LL;
long long int var_21 = -2067994937971972097LL;
long long int var_22 = 8824832015750163261LL;
long long int var_23 = -6958042333900900320LL;
long long int var_24 = 9030250432933540795LL;
long long int arr_3 [15] ;
long long int arr_4 [15] [15] [15] ;
long long int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8682578493573276472LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8451059331868950058LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 9003937881991070032LL : -3259091849174802876LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
