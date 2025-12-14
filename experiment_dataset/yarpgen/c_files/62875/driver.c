#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10406;
unsigned char var_2 = (unsigned char)71;
unsigned long long int var_4 = 2441525369450999316ULL;
unsigned char var_5 = (unsigned char)109;
unsigned long long int var_6 = 6318367903133049171ULL;
long long int var_7 = -4258096798623504180LL;
int var_8 = -1691974130;
long long int var_9 = 7010454172001481138LL;
signed char var_10 = (signed char)-21;
unsigned char var_11 = (unsigned char)57;
long long int var_12 = 7048525289212227597LL;
int var_13 = 1343012026;
unsigned char var_14 = (unsigned char)50;
int var_15 = -1717367890;
unsigned short var_16 = (unsigned short)14507;
unsigned char var_17 = (unsigned char)110;
int zero = 0;
unsigned long long int var_18 = 14043178337041626423ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)216;
unsigned long long int var_21 = 13014338033486502018ULL;
unsigned long long int arr_7 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 956446149037080576ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
