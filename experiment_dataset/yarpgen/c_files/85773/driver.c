#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1222888230;
unsigned short var_3 = (unsigned short)19771;
long long int var_4 = -4180372003978685214LL;
unsigned short var_5 = (unsigned short)55794;
unsigned short var_6 = (unsigned short)31301;
unsigned char var_8 = (unsigned char)199;
unsigned char var_9 = (unsigned char)117;
unsigned long long int var_10 = 12976744773288372526ULL;
short var_12 = (short)-13071;
int zero = 0;
unsigned int var_13 = 3164021014U;
long long int var_14 = 5121692638076431755LL;
unsigned int var_15 = 1116647727U;
unsigned char var_16 = (unsigned char)182;
unsigned short arr_8 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)22812 : (unsigned short)38627;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
