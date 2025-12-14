#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 725357208U;
unsigned long long int var_5 = 2658823896043716492ULL;
unsigned long long int var_12 = 82385950009612519ULL;
int zero = 0;
long long int var_20 = -8925056894723914700LL;
unsigned long long int var_21 = 13413018547032828281ULL;
unsigned int var_22 = 617001855U;
unsigned short var_23 = (unsigned short)42160;
unsigned long long int var_24 = 17650196015935467085ULL;
unsigned long long int var_25 = 8636583366711078458ULL;
_Bool arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
