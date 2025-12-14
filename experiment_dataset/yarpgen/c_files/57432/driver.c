#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
long long int var_2 = -2798648544462732030LL;
signed char var_3 = (signed char)-54;
long long int var_8 = -4884894562795957531LL;
unsigned long long int var_10 = 4491073522687926128ULL;
unsigned char var_12 = (unsigned char)221;
unsigned int var_15 = 3087831972U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)6869;
signed char var_21 = (signed char)52;
long long int var_22 = -5842195829323959313LL;
short var_23 = (short)-2528;
long long int var_24 = -8081619360834828585LL;
int var_25 = 383076779;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 17573943973761417714ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
