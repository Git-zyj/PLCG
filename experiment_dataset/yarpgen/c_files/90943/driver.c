#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7381437138560804491LL;
long long int var_7 = -2027539235426712416LL;
signed char var_8 = (signed char)-117;
long long int var_10 = -7235084326300505920LL;
unsigned char var_16 = (unsigned char)154;
unsigned long long int var_17 = 4316410324077652752ULL;
long long int var_18 = -2825291379852722409LL;
int zero = 0;
unsigned short var_20 = (unsigned short)1499;
long long int var_21 = 2549704886165182162LL;
unsigned long long int var_22 = 3436837025911079008ULL;
signed char var_23 = (signed char)-118;
signed char var_24 = (signed char)87;
long long int arr_1 [21] ;
signed char arr_4 [21] [21] ;
_Bool arr_10 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -5985835740754546318LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)122 : (signed char)-3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
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
