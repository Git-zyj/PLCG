#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)105;
unsigned int var_7 = 2225377744U;
unsigned short var_8 = (unsigned short)10010;
unsigned char var_10 = (unsigned char)51;
int zero = 0;
unsigned short var_11 = (unsigned short)5;
unsigned char var_12 = (unsigned char)85;
short var_13 = (short)-4813;
long long int var_14 = -6099726365595890169LL;
short var_15 = (short)16251;
signed char arr_3 [12] ;
unsigned short arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)22173;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
