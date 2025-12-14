#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8296535884406519006LL;
long long int var_1 = -7390003698311629138LL;
long long int var_2 = -3811407006451208453LL;
long long int var_3 = 1829538450377633878LL;
long long int var_4 = -1756683146380898641LL;
long long int var_5 = 7609517858646710969LL;
long long int var_8 = -6591315739694108497LL;
long long int var_9 = -27484897853976652LL;
int zero = 0;
long long int var_13 = -241956080186492279LL;
long long int var_14 = 7496307714004990070LL;
long long int var_15 = 5707886253720232736LL;
long long int var_16 = 1609465738943263080LL;
long long int var_17 = 7230860880507232693LL;
long long int var_18 = 6274760672913014910LL;
long long int var_19 = -5866546549522838321LL;
long long int arr_0 [25] ;
long long int arr_2 [25] ;
long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1092155018992495135LL : -3676244857746898538LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -2449505951267238866LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -3053811520434862472LL : -8575552069314688655LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
