#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1223994870;
long long int var_7 = -2629571775997195708LL;
long long int var_11 = -423638525891444130LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)10452;
short var_18 = (short)1567;
unsigned int var_19 = 3780086983U;
short var_20 = (short)17698;
unsigned long long int var_21 = 1075927786351689280ULL;
unsigned int var_22 = 1327293998U;
unsigned int var_23 = 97071468U;
unsigned char var_24 = (unsigned char)251;
int var_25 = -836163086;
unsigned char arr_0 [20] [20] ;
int arr_1 [20] [20] ;
unsigned long long int arr_2 [20] [20] ;
long long int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1709311948;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 12620169299720991699ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 5979715667357903859LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
