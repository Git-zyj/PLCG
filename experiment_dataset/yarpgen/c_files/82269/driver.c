#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1365617995660116256LL;
int var_4 = -1282739172;
long long int var_10 = 7223817943749551416LL;
long long int var_12 = 1142948717622529987LL;
signed char var_13 = (signed char)-25;
unsigned char var_14 = (unsigned char)9;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3134045533016303991LL;
unsigned long long int var_17 = 9274947790455325963ULL;
long long int var_18 = 8554643570340177584LL;
int var_19 = -746073817;
long long int arr_0 [15] ;
unsigned short arr_2 [15] [15] ;
unsigned short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -5337421134299407608LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)19897;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)1138;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
