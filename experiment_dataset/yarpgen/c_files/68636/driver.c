#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
short var_1 = (short)-15263;
int var_2 = 528345384;
signed char var_3 = (signed char)37;
signed char var_4 = (signed char)74;
unsigned int var_5 = 2822590847U;
unsigned char var_6 = (unsigned char)79;
signed char var_7 = (signed char)-103;
unsigned long long int var_8 = 5576197016210998699ULL;
unsigned short var_9 = (unsigned short)43104;
unsigned long long int var_10 = 14691309456704841339ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2335251219U;
int zero = 0;
short var_14 = (short)25470;
signed char var_15 = (signed char)-46;
unsigned int var_16 = 1299622258U;
int var_17 = -169765807;
unsigned short var_18 = (unsigned short)9952;
unsigned int var_19 = 4240590244U;
int var_20 = 1622343040;
short var_21 = (short)-28544;
short var_22 = (short)16149;
unsigned char var_23 = (unsigned char)83;
unsigned int var_24 = 518962956U;
int var_25 = -866513056;
_Bool arr_6 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
