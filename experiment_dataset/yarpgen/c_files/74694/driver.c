#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45664;
int var_1 = 11772053;
int var_2 = -216364939;
short var_3 = (short)29169;
short var_4 = (short)19836;
unsigned short var_5 = (unsigned short)62554;
unsigned char var_6 = (unsigned char)180;
unsigned long long int var_9 = 15211904179289858254ULL;
long long int var_10 = 6230022541283908993LL;
int zero = 0;
signed char var_11 = (signed char)-46;
unsigned short var_12 = (unsigned short)7467;
short var_13 = (short)-27376;
unsigned int var_14 = 1548511098U;
unsigned char var_15 = (unsigned char)157;
long long int var_16 = -7228414618331454189LL;
unsigned int arr_0 [18] ;
signed char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2301387000U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-30;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
