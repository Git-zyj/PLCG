#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40883;
unsigned short var_4 = (unsigned short)44274;
long long int var_5 = -1817116240561327499LL;
unsigned long long int var_6 = 1370112262041086323ULL;
unsigned int var_13 = 1899119163U;
unsigned long long int var_15 = 12355756178783531228ULL;
unsigned short var_17 = (unsigned short)47430;
int zero = 0;
long long int var_19 = 5475733842815350464LL;
unsigned short var_20 = (unsigned short)30626;
unsigned long long int var_21 = 10123957771474081547ULL;
unsigned short var_22 = (unsigned short)7207;
long long int var_23 = 2186978674242021855LL;
long long int var_24 = -6417183063652742428LL;
unsigned short var_25 = (unsigned short)24679;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -2238980385586284644LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
