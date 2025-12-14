#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)31;
unsigned short var_7 = (unsigned short)31138;
unsigned char var_9 = (unsigned char)75;
short var_11 = (short)-19551;
long long int var_12 = -1534870035314323095LL;
unsigned char var_13 = (unsigned char)179;
int zero = 0;
int var_16 = 172175071;
unsigned int var_17 = 1912723625U;
long long int var_18 = 7855086278584429505LL;
int var_19 = -1388621776;
short var_20 = (short)9869;
_Bool arr_0 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
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
