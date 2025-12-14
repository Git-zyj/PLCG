#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12530778649193473249ULL;
long long int var_1 = -1607734154515770437LL;
unsigned char var_2 = (unsigned char)135;
long long int var_3 = -1704814023868270609LL;
int var_4 = 1029629927;
int var_5 = 878493534;
unsigned char var_7 = (unsigned char)3;
unsigned char var_8 = (unsigned char)236;
long long int var_9 = 2635104614685602713LL;
int zero = 0;
long long int var_11 = -6936078162237328031LL;
long long int var_12 = -133100912464006546LL;
unsigned int var_13 = 1258361716U;
unsigned short var_14 = (unsigned short)6975;
long long int var_15 = 8885883884951875165LL;
unsigned char var_16 = (unsigned char)199;
int var_17 = 249427858;
unsigned int var_18 = 1661932471U;
long long int arr_10 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1658269292880726224LL : -4358395349233706098LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
