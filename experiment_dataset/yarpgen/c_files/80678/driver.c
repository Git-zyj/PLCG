#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7569864397441635536LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)12756;
unsigned short var_6 = (unsigned short)18770;
int zero = 0;
unsigned int var_12 = 3589221357U;
short var_13 = (short)13557;
unsigned short var_14 = (unsigned short)11535;
unsigned long long int var_15 = 11514193825096152004ULL;
_Bool arr_1 [18] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 16889047860082864913ULL;
}

void checksum() {
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
