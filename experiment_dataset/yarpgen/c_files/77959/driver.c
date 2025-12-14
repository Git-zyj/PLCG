#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49354;
short var_3 = (short)-12149;
signed char var_7 = (signed char)60;
unsigned short var_9 = (unsigned short)57880;
signed char var_11 = (signed char)-116;
int var_12 = 529059835;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)57593;
int var_15 = 1314216174;
unsigned long long int var_17 = 4488403299867133901ULL;
int zero = 0;
long long int var_18 = -2493193697673102499LL;
int var_19 = -794123721;
unsigned short var_20 = (unsigned short)28102;
short var_21 = (short)32447;
unsigned short var_22 = (unsigned short)2050;
long long int var_23 = -6766527058796447305LL;
short var_24 = (short)5037;
unsigned int var_25 = 3057204409U;
unsigned long long int arr_0 [23] [23] ;
int arr_1 [23] ;
unsigned int arr_3 [21] ;
unsigned int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 17617427827570688468ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1737137975;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 876454217U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2175680150U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
