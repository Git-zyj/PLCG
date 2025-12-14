#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5721258865424621178LL;
unsigned short var_1 = (unsigned short)54549;
signed char var_2 = (signed char)-26;
unsigned short var_3 = (unsigned short)16172;
short var_4 = (short)22296;
unsigned long long int var_9 = 10810115626892901978ULL;
short var_10 = (short)-22154;
int zero = 0;
unsigned short var_13 = (unsigned short)567;
unsigned short var_14 = (unsigned short)33184;
unsigned int var_15 = 856901258U;
signed char var_16 = (signed char)-45;
unsigned char var_17 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
