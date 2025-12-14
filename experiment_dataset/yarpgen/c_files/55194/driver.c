#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)149;
unsigned int var_4 = 640986741U;
int var_5 = 1305128192;
unsigned int var_6 = 1483924412U;
signed char var_7 = (signed char)-100;
unsigned long long int var_10 = 13182012067142133014ULL;
long long int var_12 = 8096723196658685488LL;
unsigned long long int var_14 = 2277876408318071651ULL;
int zero = 0;
int var_16 = 973388464;
signed char var_17 = (signed char)64;
unsigned long long int var_18 = 4449568771010723794ULL;
long long int var_19 = 8144837633321681039LL;
short var_20 = (short)21174;
unsigned int var_21 = 198623464U;
int var_22 = -748588507;
signed char arr_6 [21] ;
unsigned char arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)14;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
