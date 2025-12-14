#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2453395359U;
unsigned long long int var_7 = 8896810630821948980ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_11 = -4260310487900503642LL;
unsigned long long int var_12 = 2523572790389330091ULL;
long long int var_13 = -9048347934674474113LL;
unsigned int var_14 = 1847948694U;
unsigned char var_15 = (unsigned char)202;
long long int arr_0 [18] ;
unsigned long long int arr_2 [18] [18] ;
unsigned long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -2511029201006712106LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 14474342803640514136ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 9844977089820383960ULL;
}

void checksum() {
    hash(&seed, var_11);
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
