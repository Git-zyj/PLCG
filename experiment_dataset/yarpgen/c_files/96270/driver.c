#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
_Bool var_2 = (_Bool)1;
unsigned char var_10 = (unsigned char)220;
unsigned short var_11 = (unsigned short)4578;
int var_12 = -243325524;
int var_15 = -115992569;
unsigned long long int var_16 = 8480817204242143993ULL;
unsigned int var_18 = 264738500U;
short var_19 = (short)24318;
int zero = 0;
unsigned char var_20 = (unsigned char)189;
long long int var_21 = -5094530973999325792LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
