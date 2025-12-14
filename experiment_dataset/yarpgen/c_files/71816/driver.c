#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6517990454350830624LL;
unsigned int var_3 = 794674310U;
long long int var_7 = 2480231766745902319LL;
_Bool var_10 = (_Bool)1;
int var_13 = -2055728110;
int zero = 0;
unsigned long long int var_15 = 12054277119319508445ULL;
int var_16 = -1171576175;
short var_17 = (short)-17067;
signed char var_18 = (signed char)-99;
_Bool var_19 = (_Bool)1;
int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1875547250;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
