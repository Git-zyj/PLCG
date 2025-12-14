#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35114;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2704180267U;
unsigned long long int var_6 = 15134543204759496448ULL;
signed char var_12 = (signed char)104;
_Bool var_13 = (_Bool)1;
unsigned short var_18 = (unsigned short)8304;
int zero = 0;
int var_19 = -1583731280;
short var_20 = (short)-23892;
short var_21 = (short)-32225;
long long int var_22 = 5370876568438359319LL;
unsigned int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 975926146U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 7053866423807933224ULL;
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
