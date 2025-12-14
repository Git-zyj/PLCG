#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10734917622990658723ULL;
long long int var_3 = -3629390402235048098LL;
unsigned char var_6 = (unsigned char)102;
long long int var_8 = -6098191387710881137LL;
long long int var_9 = -1632350370334946509LL;
unsigned short var_11 = (unsigned short)15785;
long long int var_13 = -6333477589670317984LL;
int zero = 0;
short var_17 = (short)16244;
unsigned char var_18 = (unsigned char)175;
short var_19 = (short)5709;
int arr_0 [10] ;
long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -2000971008;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -6685991524396077932LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
