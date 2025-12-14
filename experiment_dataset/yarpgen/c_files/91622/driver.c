#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1172655364;
unsigned char var_5 = (unsigned char)32;
long long int var_6 = 4648551230641782635LL;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
unsigned char var_17 = (unsigned char)180;
short var_18 = (short)26305;
unsigned long long int var_19 = 15878613624105308037ULL;
unsigned long long int var_20 = 4726363033025627768ULL;
unsigned long long int var_21 = 12569890139120383544ULL;
_Bool arr_1 [18] ;
long long int arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -5985877753983214149LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
