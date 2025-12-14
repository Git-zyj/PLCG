#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
unsigned long long int var_4 = 13459069478821629057ULL;
int var_5 = 1695057236;
unsigned char var_6 = (unsigned char)53;
long long int var_10 = -3869251167067907060LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = 7057969037253958748LL;
int var_15 = 1445598113;
unsigned short var_16 = (unsigned short)52627;
unsigned long long int var_17 = 17987749684140490542ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)214;
signed char var_19 = (signed char)9;
unsigned short var_20 = (unsigned short)7782;
unsigned short var_21 = (unsigned short)52959;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
