#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2600569573990552737ULL;
unsigned long long int var_1 = 13460497483142227838ULL;
unsigned long long int var_2 = 5494481051900575851ULL;
unsigned long long int var_3 = 10395356761719972952ULL;
short var_4 = (short)27804;
unsigned long long int var_5 = 17984162707062204920ULL;
long long int var_6 = 8757287177199446383LL;
signed char var_7 = (signed char)-74;
unsigned long long int var_8 = 14827069709278792610ULL;
short var_9 = (short)26848;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-25690;
unsigned short var_12 = (unsigned short)47831;
_Bool var_13 = (_Bool)0;
unsigned long long int arr_0 [11] [11] ;
long long int arr_2 [11] ;
signed char arr_3 [11] ;
_Bool arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 17089269025535955273ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 5079150400856773410LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
