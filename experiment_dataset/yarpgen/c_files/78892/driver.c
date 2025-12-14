#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3777115996181530032ULL;
short var_1 = (short)-9260;
unsigned int var_2 = 1592557593U;
unsigned int var_3 = 3682733405U;
unsigned long long int var_5 = 447075145874113512ULL;
unsigned long long int var_6 = 367483824081039453ULL;
long long int var_7 = 7916020416144478178LL;
long long int var_8 = 8032964832551347902LL;
short var_9 = (short)19303;
long long int var_10 = -190641053734835445LL;
signed char var_11 = (signed char)47;
unsigned long long int var_15 = 17273613243602850333ULL;
int zero = 0;
short var_18 = (short)19494;
int var_19 = -1698884657;
short var_20 = (short)-406;
long long int var_21 = 1243780825947434180LL;
signed char arr_8 [18] ;
_Bool arr_9 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
