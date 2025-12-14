#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)199;
short var_7 = (short)18445;
unsigned long long int var_11 = 43597052534466744ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)170;
int var_20 = 57082117;
unsigned short var_21 = (unsigned short)37622;
int var_22 = -2032091492;
unsigned long long int var_23 = 17451373559035406588ULL;
signed char arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-105;
}

void checksum() {
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
