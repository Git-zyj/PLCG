#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3961050037U;
long long int var_8 = 5320625596609246379LL;
unsigned long long int var_10 = 732338431474778402ULL;
unsigned char var_15 = (unsigned char)181;
signed char var_19 = (signed char)-91;
int zero = 0;
signed char var_20 = (signed char)-18;
long long int var_21 = 8304919390557527479LL;
unsigned int var_22 = 4096607471U;
long long int var_23 = 5681299293659372493LL;
unsigned long long int var_24 = 5827352431241462057ULL;
unsigned int var_25 = 704341967U;
unsigned short var_26 = (unsigned short)27908;
unsigned char var_27 = (unsigned char)165;
unsigned long long int arr_0 [15] ;
unsigned char arr_2 [15] ;
unsigned char arr_3 [15] [15] ;
long long int arr_4 [15] ;
unsigned char arr_9 [24] [24] ;
short arr_10 [24] ;
short arr_5 [15] ;
long long int arr_8 [14] ;
unsigned long long int arr_11 [24] [24] ;
unsigned long long int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 14310403845187626255ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 9108339153491039961LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (short)7207;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)-7784;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 8401444005434023174LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 15433988824715794015ULL : 17924914760905687267ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3444253693889437068ULL : 5979041980356059551ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
