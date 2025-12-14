#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2190946255U;
unsigned short var_1 = (unsigned short)51773;
unsigned int var_2 = 569638935U;
unsigned long long int var_3 = 10841280609932298918ULL;
unsigned short var_6 = (unsigned short)32705;
long long int var_7 = 5024471924996244062LL;
signed char var_8 = (signed char)82;
unsigned int var_9 = 1671183274U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)168;
unsigned int var_15 = 3699673770U;
unsigned short var_16 = (unsigned short)48318;
long long int var_17 = 4807048416762209241LL;
unsigned short var_18 = (unsigned short)61834;
unsigned long long int var_19 = 10652662455055038376ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
long long int arr_3 [13] [13] ;
short arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -1531021531364528010LL : -7297979578038885804LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)10012 : (short)-16331;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
