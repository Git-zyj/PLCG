#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned long long int var_1 = 12912386341595587957ULL;
unsigned long long int var_2 = 12125314765019869349ULL;
int var_3 = -2093230524;
unsigned long long int var_4 = 7828109081050268334ULL;
long long int var_5 = -1294020458536417753LL;
unsigned short var_6 = (unsigned short)51900;
long long int var_7 = 4381378081233547074LL;
unsigned int var_8 = 4114497017U;
unsigned int var_9 = 2951879592U;
unsigned long long int var_10 = 1992870532010664300ULL;
int zero = 0;
signed char var_11 = (signed char)-1;
unsigned int var_12 = 3246650654U;
unsigned long long int var_13 = 6236545810720096546ULL;
signed char var_14 = (signed char)-104;
int var_15 = 1721264633;
signed char var_16 = (signed char)86;
unsigned short var_17 = (unsigned short)45983;
unsigned int var_18 = 898769779U;
unsigned long long int var_19 = 9815463912364869118ULL;
unsigned short var_20 = (unsigned short)41056;
long long int var_21 = 8743952888375207397LL;
unsigned int var_22 = 2394581314U;
long long int arr_2 [12] [12] ;
_Bool arr_6 [16] ;
unsigned short arr_9 [16] ;
long long int arr_12 [16] [16] ;
unsigned long long int arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 5644284352388430397LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)26848;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 7130909138228084578LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 15405856890414138643ULL;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
