#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9209742698563162525LL;
signed char var_3 = (signed char)-124;
int var_4 = -497744669;
long long int var_7 = 6277235698029041955LL;
unsigned short var_9 = (unsigned short)40093;
int zero = 0;
long long int var_12 = 4711414430775713483LL;
short var_13 = (short)25154;
unsigned short var_14 = (unsigned short)28293;
_Bool arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
