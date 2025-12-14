#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
signed char var_2 = (signed char)-116;
int var_4 = -178940393;
unsigned long long int var_6 = 4411126701521171539ULL;
unsigned char var_7 = (unsigned char)113;
unsigned int var_8 = 827487677U;
unsigned char var_11 = (unsigned char)22;
long long int var_12 = 4890226099121504840LL;
int zero = 0;
unsigned short var_13 = (unsigned short)10615;
int var_14 = 793391087;
unsigned long long int var_15 = 9074001369822180158ULL;
signed char var_16 = (signed char)-2;
short var_17 = (short)3550;
unsigned long long int var_18 = 17645999123504715563ULL;
unsigned short arr_13 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)58047;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
