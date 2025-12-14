#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17075966883898351295ULL;
unsigned int var_3 = 1922910489U;
short var_4 = (short)-2863;
long long int var_5 = -380453997661713068LL;
unsigned long long int var_6 = 7510136342163807917ULL;
unsigned char var_9 = (unsigned char)51;
short var_10 = (short)20897;
unsigned char var_13 = (unsigned char)186;
int zero = 0;
unsigned int var_18 = 3125508835U;
unsigned char var_19 = (unsigned char)98;
int var_20 = -1447528132;
unsigned short var_21 = (unsigned short)62356;
long long int var_22 = -7825136097789718925LL;
unsigned char arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)212 : (unsigned char)183;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
