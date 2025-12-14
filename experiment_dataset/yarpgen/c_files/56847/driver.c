#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8067045789283523673LL;
short var_8 = (short)1576;
int zero = 0;
long long int var_20 = -3930910248911980107LL;
signed char var_21 = (signed char)-40;
unsigned short var_22 = (unsigned short)28805;
signed char var_23 = (signed char)-119;
_Bool var_24 = (_Bool)1;
long long int var_25 = -4478329062373811694LL;
signed char var_26 = (signed char)84;
int var_27 = 471867348;
unsigned int arr_0 [14] [14] ;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 3459436857U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)32;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
