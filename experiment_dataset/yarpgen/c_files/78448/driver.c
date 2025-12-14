#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)40;
unsigned long long int var_11 = 11177777756580446118ULL;
long long int var_12 = 8200246826039752732LL;
unsigned short var_13 = (unsigned short)31306;
signed char var_14 = (signed char)98;
int zero = 0;
unsigned char var_16 = (unsigned char)18;
short var_17 = (short)-25160;
signed char var_18 = (signed char)-98;
long long int arr_0 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 6306517718602783824LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
