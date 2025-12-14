#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7665647405801021833LL;
unsigned char var_3 = (unsigned char)220;
signed char var_4 = (signed char)-47;
long long int var_6 = 7878360909270279132LL;
unsigned int var_10 = 245667154U;
_Bool var_12 = (_Bool)0;
short var_15 = (short)-21977;
int zero = 0;
unsigned int var_20 = 4246056551U;
signed char var_21 = (signed char)-26;
unsigned long long int var_22 = 13682604454588516992ULL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)16839;
unsigned long long int arr_1 [10] ;
unsigned short arr_2 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 11210623034102892511ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)8646;
}

void checksum() {
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
