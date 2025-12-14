#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5892366949310875515LL;
unsigned char var_1 = (unsigned char)220;
long long int var_2 = -5637961922725859079LL;
long long int var_4 = -8294941002965555628LL;
signed char var_8 = (signed char)-124;
unsigned short var_16 = (unsigned short)36486;
int zero = 0;
signed char var_20 = (signed char)71;
signed char var_21 = (signed char)-60;
signed char var_22 = (signed char)73;
unsigned short var_23 = (unsigned short)47589;
signed char var_24 = (signed char)-19;
unsigned short var_25 = (unsigned short)39620;
long long int var_26 = -4204317089945710387LL;
signed char arr_0 [20] [20] ;
unsigned int arr_3 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)65 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2634601691U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
