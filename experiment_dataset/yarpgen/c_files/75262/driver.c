#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
unsigned long long int var_1 = 5739171738215236949ULL;
unsigned short var_2 = (unsigned short)58440;
int var_7 = -655327445;
long long int var_10 = -409315229615337810LL;
long long int var_12 = 982702213293186683LL;
unsigned long long int var_13 = 18345647091490388948ULL;
short var_14 = (short)5325;
unsigned short var_15 = (unsigned short)50507;
unsigned short var_16 = (unsigned short)22149;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)24092;
signed char var_20 = (signed char)-124;
unsigned char var_21 = (unsigned char)76;
unsigned long long int var_22 = 3449364247630891241ULL;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 14155887687320481965ULL;
signed char arr_0 [17] ;
long long int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 3787740735481450008LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
