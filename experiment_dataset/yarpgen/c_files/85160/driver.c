#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned long long int var_3 = 7970266010348356209ULL;
int var_6 = 1178461225;
unsigned long long int var_8 = 10155879999968086596ULL;
signed char var_10 = (signed char)101;
int zero = 0;
int var_15 = -1007144167;
unsigned int var_16 = 2851015525U;
unsigned long long int var_17 = 5917309199648805030ULL;
signed char var_18 = (signed char)-127;
unsigned long long int var_19 = 17056916925371055681ULL;
unsigned int var_20 = 851299667U;
short var_21 = (short)-26432;
signed char var_22 = (signed char)81;
unsigned long long int var_23 = 14162949192958452073ULL;
unsigned int var_24 = 3131915448U;
signed char var_25 = (signed char)-41;
signed char var_26 = (signed char)112;
int arr_1 [17] ;
unsigned int arr_4 [17] ;
signed char arr_11 [19] ;
unsigned long long int arr_15 [19] ;
unsigned long long int arr_17 [19] [19] [19] ;
int arr_21 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1023007116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2762387425U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 2657978188836617517ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 10828001486467764310ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 463808490;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
