#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -201138190;
long long int var_6 = -2339603435545368648LL;
int var_9 = -453279769;
unsigned long long int var_11 = 5375594061321787442ULL;
long long int var_14 = 7105224915815091162LL;
long long int var_15 = 6833867053241670374LL;
unsigned long long int var_16 = 8773347474769470682ULL;
int zero = 0;
int var_17 = -1977139918;
signed char var_18 = (signed char)-64;
unsigned long long int var_19 = 16949671774712495570ULL;
unsigned int var_20 = 1807897542U;
unsigned long long int var_21 = 1820469080885892539ULL;
signed char var_22 = (signed char)-106;
unsigned short var_23 = (unsigned short)3613;
unsigned short var_24 = (unsigned short)10628;
long long int var_25 = -221293302422745128LL;
long long int var_26 = -2027511856040324554LL;
long long int var_27 = 633986626853398773LL;
_Bool var_28 = (_Bool)1;
short arr_0 [14] ;
unsigned int arr_1 [14] [14] ;
unsigned int arr_2 [14] ;
unsigned short arr_4 [14] ;
long long int arr_5 [14] [14] [14] ;
int arr_6 [14] [14] [14] [14] ;
int arr_13 [13] ;
unsigned char arr_14 [13] ;
long long int arr_7 [14] [14] ;
int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)1757;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2908562141U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3788420409U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)59187;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1413094766481037940LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1127306281;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = -148172373;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 3822550232395103297LL : -2466879832224611880LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = -2130362387;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
