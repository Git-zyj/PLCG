#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7608053096791975235LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 18309277268507532690ULL;
unsigned long long int var_13 = 14745306481134823934ULL;
int zero = 0;
unsigned long long int var_19 = 306111398450213738ULL;
unsigned long long int var_20 = 8406111836557165294ULL;
signed char var_21 = (signed char)101;
int var_22 = 1643442098;
signed char var_23 = (signed char)64;
unsigned long long int arr_0 [10] ;
int arr_1 [10] ;
_Bool arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 17383762369813634346ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 938750541;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
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
