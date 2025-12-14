#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7333178495653079153LL;
signed char var_3 = (signed char)24;
unsigned long long int var_13 = 11175013843718029988ULL;
long long int var_14 = -2209416930692016429LL;
unsigned int var_17 = 1987305868U;
int zero = 0;
unsigned char var_18 = (unsigned char)94;
unsigned short var_19 = (unsigned short)41098;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)68;
signed char var_22 = (signed char)80;
unsigned long long int var_23 = 10926584668140195229ULL;
unsigned long long int arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 16002597044797371246ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
