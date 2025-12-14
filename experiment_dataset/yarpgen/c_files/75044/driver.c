#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
long long int var_2 = 2970861239435666283LL;
unsigned char var_3 = (unsigned char)98;
unsigned char var_7 = (unsigned char)178;
unsigned char var_8 = (unsigned char)184;
unsigned char var_10 = (unsigned char)120;
unsigned char var_14 = (unsigned char)137;
long long int var_17 = -8508472580792553079LL;
int zero = 0;
unsigned char var_19 = (unsigned char)229;
long long int var_20 = 2908162881299965897LL;
long long int arr_0 [13] ;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -218986753513512531LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
