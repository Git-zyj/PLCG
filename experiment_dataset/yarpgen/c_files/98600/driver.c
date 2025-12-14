#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1108543235;
signed char var_9 = (signed char)-111;
unsigned char var_11 = (unsigned char)128;
unsigned short var_13 = (unsigned short)56315;
unsigned int var_14 = 842677187U;
int var_17 = -1734431915;
int zero = 0;
long long int var_18 = 7409066908526589399LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)224;
unsigned long long int var_21 = 16139983523927231941ULL;
short var_22 = (short)-29886;
short var_23 = (short)8348;
long long int var_24 = 7195246017623635620LL;
unsigned long long int arr_3 [20] [20] [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9753891188153790419ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4783263909379456095ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
