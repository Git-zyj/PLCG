#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12551751848719112014ULL;
signed char var_1 = (signed char)-58;
long long int var_3 = -5889628190514030763LL;
long long int var_11 = 4913846304632360298LL;
int zero = 0;
unsigned long long int var_17 = 17036126862728683550ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)88;
long long int var_20 = -6763964876501874184LL;
unsigned char var_21 = (unsigned char)222;
_Bool arr_4 [20] [20] ;
unsigned int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2619621878U : 638052322U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
