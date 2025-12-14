#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 121357878205398056LL;
long long int var_1 = -6044311078389780656LL;
signed char var_2 = (signed char)-60;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)92;
long long int var_6 = 1641449660275207296LL;
signed char var_11 = (signed char)63;
short var_15 = (short)-7614;
int zero = 0;
long long int var_17 = 7687951518203791818LL;
unsigned int var_18 = 1861479024U;
long long int var_19 = -982795073128915198LL;
long long int var_20 = -3140583699567997983LL;
unsigned int var_21 = 1967856219U;
unsigned char arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)17;
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
