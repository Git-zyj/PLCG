#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5798;
short var_1 = (short)20687;
unsigned int var_2 = 1531030521U;
short var_3 = (short)-19204;
unsigned long long int var_4 = 7469559606305654544ULL;
signed char var_5 = (signed char)-37;
long long int var_6 = -5591516835160683588LL;
unsigned long long int var_7 = 3874200274594838087ULL;
int var_8 = -1383742434;
long long int var_9 = -1141304755885045643LL;
short var_10 = (short)-19156;
unsigned long long int var_11 = 16075351078572578357ULL;
int var_12 = -1381430624;
int zero = 0;
unsigned int var_13 = 1024796562U;
long long int var_14 = -2135395304976244509LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-34;
unsigned long long int var_17 = 4383629380898229063ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 15383880927241340329ULL;
short var_20 = (short)25661;
signed char var_21 = (signed char)95;
long long int var_22 = 8586258701963120061LL;
unsigned char var_23 = (unsigned char)154;
unsigned short var_24 = (unsigned short)40476;
unsigned short var_25 = (unsigned short)19011;
unsigned int var_26 = 2295181001U;
_Bool var_27 = (_Bool)0;
short var_28 = (short)8775;
long long int arr_0 [20] [20] ;
_Bool arr_4 [20] [20] [20] ;
signed char arr_9 [15] [15] ;
unsigned int arr_11 [15] [15] ;
_Bool arr_5 [20] [20] [20] ;
unsigned int arr_6 [20] ;
unsigned short arr_24 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 8349360321686183613LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 2374151028U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3760534931U : 2281644233U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)64177;
}

void checksum() {
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
