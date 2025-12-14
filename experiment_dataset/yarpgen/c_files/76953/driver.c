#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 2702789394813711023ULL;
long long int var_2 = -1909494707897664116LL;
long long int var_4 = -5099649787076735930LL;
long long int var_8 = -5076668378064632586LL;
int zero = 0;
unsigned long long int var_10 = 12614540859660798762ULL;
unsigned short var_11 = (unsigned short)33998;
int var_12 = -2053400110;
long long int var_13 = 7665263435721364615LL;
int var_14 = 1651321850;
long long int arr_2 [12] ;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 5184725273801170895LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3962012810739775638ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
