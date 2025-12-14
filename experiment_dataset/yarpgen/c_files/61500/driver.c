#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4714604752679339000LL;
unsigned short var_1 = (unsigned short)54962;
unsigned char var_2 = (unsigned char)110;
unsigned char var_3 = (unsigned char)128;
long long int var_4 = 8487207026345465233LL;
long long int var_5 = 5439517234539745716LL;
signed char var_6 = (signed char)6;
unsigned short var_8 = (unsigned short)81;
long long int var_11 = -5058207000829692940LL;
long long int var_12 = -8091170780518768577LL;
int zero = 0;
long long int var_13 = 8582676774007794685LL;
unsigned char var_14 = (unsigned char)131;
unsigned char var_15 = (unsigned char)112;
long long int var_16 = -4350509593408622960LL;
short var_17 = (short)8198;
unsigned char var_18 = (unsigned char)22;
unsigned char var_19 = (unsigned char)248;
unsigned short var_20 = (unsigned short)59195;
signed char arr_1 [17] [17] ;
unsigned char arr_2 [17] ;
unsigned short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)39021;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
