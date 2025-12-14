#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1016144486;
short var_4 = (short)26100;
int var_5 = 2074962566;
short var_7 = (short)26215;
long long int var_9 = -6318218400181307770LL;
short var_10 = (short)-10969;
unsigned long long int var_11 = 16393919162185004151ULL;
short var_12 = (short)-24995;
short var_14 = (short)-53;
unsigned char var_17 = (unsigned char)207;
int zero = 0;
long long int var_19 = -3387422121971904171LL;
signed char var_20 = (signed char)-69;
short var_21 = (short)-15358;
unsigned long long int var_22 = 12176992082819056684ULL;
signed char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)119;
}

void checksum() {
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
