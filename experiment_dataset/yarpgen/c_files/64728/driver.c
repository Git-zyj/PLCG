#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12051;
short var_2 = (short)-1968;
long long int var_3 = -6147838564029136555LL;
unsigned int var_7 = 1145092583U;
unsigned int var_8 = 1600093015U;
unsigned int var_11 = 34227072U;
unsigned short var_14 = (unsigned short)35221;
unsigned long long int var_15 = 8357748949728177158ULL;
int zero = 0;
unsigned long long int var_17 = 2214458165620272009ULL;
unsigned long long int var_18 = 4039921961216059511ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)57611;
signed char var_21 = (signed char)-88;
short var_22 = (short)-9569;
unsigned long long int var_23 = 17041908876822640067ULL;
long long int arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
_Bool arr_4 [17] [17] [17] ;
long long int arr_5 [17] [17] ;
unsigned long long int arr_7 [17] [17] [17] [17] ;
unsigned short arr_2 [17] [17] ;
unsigned short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 8953161360549197132LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1349530248U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -1876419125222139362LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 5554462946758208127ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)39615 : (unsigned short)32561;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54269 : (unsigned short)9877;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
