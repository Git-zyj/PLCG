#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-61;
short var_5 = (short)-23071;
unsigned long long int var_8 = 2265981827928559957ULL;
unsigned long long int var_11 = 6002866231598512354ULL;
long long int var_12 = -6151748676014727964LL;
int zero = 0;
unsigned int var_16 = 72291726U;
short var_17 = (short)-3337;
signed char var_18 = (signed char)-125;
unsigned char var_19 = (unsigned char)82;
long long int var_20 = -4617040500191298797LL;
_Bool arr_0 [10] ;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
