#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9075923779562498691ULL;
unsigned short var_1 = (unsigned short)17356;
unsigned long long int var_2 = 3784650813349816422ULL;
long long int var_3 = 11185471113504790LL;
short var_4 = (short)-7940;
int var_6 = -1706818362;
unsigned short var_8 = (unsigned short)22262;
int var_9 = -353303578;
int zero = 0;
short var_12 = (short)16055;
long long int var_13 = 8274242813976559730LL;
unsigned int var_14 = 3065147480U;
unsigned char var_15 = (unsigned char)253;
unsigned short var_16 = (unsigned short)2571;
unsigned char var_17 = (unsigned char)251;
unsigned char arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)202 : (unsigned char)30;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
