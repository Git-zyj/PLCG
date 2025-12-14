#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3966194830396466580LL;
long long int var_1 = 3240853279238856555LL;
short var_3 = (short)21606;
short var_5 = (short)29333;
long long int var_7 = 467047952236877761LL;
short var_10 = (short)-31959;
long long int var_16 = -1672902910264256959LL;
short var_18 = (short)-20858;
int zero = 0;
long long int var_19 = 2785710243217808086LL;
short var_20 = (short)21627;
short var_21 = (short)14275;
short var_22 = (short)-28635;
short var_23 = (short)-11732;
short var_24 = (short)31845;
short arr_0 [16] ;
short arr_1 [16] ;
long long int arr_2 [16] [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)16484;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-4878;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -2424274418496027710LL : 3987065801445753006LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -3338038023253552237LL : 6125524010895332364LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
