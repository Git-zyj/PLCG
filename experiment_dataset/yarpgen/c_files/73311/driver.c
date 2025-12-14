#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -64331675693342097LL;
long long int var_3 = -1973766612191613228LL;
int var_6 = -1648747590;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)6388;
unsigned short var_14 = (unsigned short)65026;
unsigned char var_15 = (unsigned char)45;
unsigned long long int var_16 = 17766039403237950487ULL;
unsigned char var_17 = (unsigned char)132;
long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1860047066899838121LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
