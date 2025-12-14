#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)226;
unsigned short var_4 = (unsigned short)41098;
int var_6 = 1901491064;
unsigned char var_7 = (unsigned char)50;
int zero = 0;
unsigned short var_19 = (unsigned short)54222;
unsigned short var_20 = (unsigned short)9560;
unsigned char var_21 = (unsigned char)244;
int var_22 = 800914350;
unsigned char var_23 = (unsigned char)87;
unsigned char var_24 = (unsigned char)119;
_Bool var_25 = (_Bool)1;
long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
int arr_8 [11] [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -5468815290614889788LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1728218909962547229ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 15903776185112189151ULL : 10526451637942435929ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -356556373 : -1706298316;
}

void checksum() {
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
