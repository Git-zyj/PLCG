#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3478948226U;
long long int var_1 = 8862615968892810232LL;
unsigned long long int var_2 = 3061600192759801880ULL;
unsigned long long int var_3 = 16544660733245295865ULL;
long long int var_4 = -271134617723232589LL;
unsigned int var_5 = 1952142706U;
unsigned char var_6 = (unsigned char)120;
unsigned char var_8 = (unsigned char)231;
unsigned int var_10 = 2703215240U;
int zero = 0;
unsigned char var_11 = (unsigned char)136;
unsigned int var_12 = 995354898U;
unsigned int var_13 = 2837307992U;
unsigned long long int var_14 = 3256008300803407851ULL;
unsigned char var_15 = (unsigned char)28;
int var_16 = -1302705072;
long long int var_17 = 3148982156872452454LL;
unsigned int var_18 = 2681553846U;
_Bool arr_3 [19] ;
int arr_6 [19] ;
unsigned int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1621838062;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 2586682079U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
