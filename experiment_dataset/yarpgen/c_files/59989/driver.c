#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5197989564812219481LL;
long long int var_5 = 5071719569712485396LL;
unsigned short var_7 = (unsigned short)14635;
signed char var_8 = (signed char)27;
int var_9 = 1414493555;
long long int var_11 = -4500371354130311023LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_18 = -7778841516694864019LL;
int var_19 = -1170027013;
unsigned short var_20 = (unsigned short)40773;
short var_21 = (short)-25677;
unsigned long long int var_22 = 5540896605588271478ULL;
unsigned char var_23 = (unsigned char)166;
short var_24 = (short)-13516;
_Bool arr_0 [19] ;
int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 887937780;
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
