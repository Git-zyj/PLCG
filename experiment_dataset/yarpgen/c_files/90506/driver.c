#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14111322858491702551ULL;
long long int var_1 = 6328629920840009551LL;
unsigned long long int var_2 = 7969067828177534276ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 393696179U;
signed char var_5 = (signed char)62;
unsigned char var_6 = (unsigned char)56;
unsigned short var_7 = (unsigned short)4186;
int var_8 = -912105634;
signed char var_9 = (signed char)126;
int zero = 0;
unsigned long long int var_10 = 2682933524206622296ULL;
unsigned long long int var_11 = 10126232432489162831ULL;
short var_12 = (short)-9643;
long long int var_13 = -2181103807121190035LL;
long long int var_14 = 6796163805541987413LL;
short var_15 = (short)14854;
signed char var_16 = (signed char)-103;
signed char var_17 = (signed char)-127;
unsigned char var_18 = (unsigned char)246;
unsigned int arr_6 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 4175443225U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
