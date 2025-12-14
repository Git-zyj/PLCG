#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17188547189496706279ULL;
short var_8 = (short)13685;
_Bool var_9 = (_Bool)0;
long long int var_16 = 5290564757722945191LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3865054054328614485ULL;
unsigned short var_20 = (unsigned short)30446;
unsigned long long int arr_0 [13] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1287364108837631429ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 5589928862788724195LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
