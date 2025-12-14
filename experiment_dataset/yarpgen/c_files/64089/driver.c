#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)153;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)41334;
long long int var_3 = 4689028134784488325LL;
long long int var_4 = -1720692048080571196LL;
long long int var_5 = -4489092523325071070LL;
long long int var_6 = 2169471007952199810LL;
long long int var_7 = -4374829317693575754LL;
long long int var_8 = -6974484194624510787LL;
long long int var_9 = -1986499573659690660LL;
unsigned short var_10 = (unsigned short)43760;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -6140768271458611799LL;
unsigned short var_13 = (unsigned short)54777;
long long int var_14 = 8768078980948422951LL;
unsigned long long int var_15 = 7234917501709437870ULL;
unsigned long long int var_16 = 17869509825584381876ULL;
long long int var_17 = 3055016006535936782LL;
unsigned short var_18 = (unsigned short)39957;
long long int var_19 = -566032405713643620LL;
long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -6352299525845494071LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 8229075637874248714ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3294030340111992729LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
