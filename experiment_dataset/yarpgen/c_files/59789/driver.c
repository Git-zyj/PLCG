#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1375555316043472344LL;
unsigned long long int var_8 = 2020570616998745332ULL;
unsigned short var_10 = (unsigned short)15623;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-4790;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 7935515952751568973LL;
short var_17 = (short)-31706;
int var_18 = -1974522487;
signed char var_19 = (signed char)-80;
_Bool arr_0 [14] ;
_Bool arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
