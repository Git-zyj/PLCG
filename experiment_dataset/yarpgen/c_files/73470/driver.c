#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56566;
unsigned long long int var_3 = 16284671659119114788ULL;
unsigned short var_5 = (unsigned short)16963;
unsigned long long int var_6 = 11996212214625595045ULL;
unsigned long long int var_7 = 15702938790005306981ULL;
short var_10 = (short)-3473;
long long int var_11 = -2617542311997550621LL;
long long int var_12 = -3827729519682090859LL;
long long int var_13 = 8086165601711208655LL;
int zero = 0;
unsigned short var_14 = (unsigned short)55120;
unsigned short var_15 = (unsigned short)64968;
unsigned long long int var_16 = 8797657077350808693ULL;
unsigned short var_17 = (unsigned short)50655;
unsigned long long int var_18 = 11271619703613032375ULL;
unsigned long long int var_19 = 953599932289241667ULL;
unsigned short arr_11 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)49338;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
