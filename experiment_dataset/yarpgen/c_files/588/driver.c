#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
unsigned long long int var_3 = 10683830081537196535ULL;
unsigned int var_4 = 1383809278U;
long long int var_6 = 7467434015824756678LL;
int var_8 = -186368211;
long long int var_9 = 680840209801143963LL;
short var_10 = (short)-19290;
unsigned short var_12 = (unsigned short)60839;
long long int var_13 = -7593661853692177478LL;
short var_14 = (short)28155;
unsigned int var_16 = 2691980416U;
long long int var_18 = -1870049100443917914LL;
signed char var_19 = (signed char)-27;
int zero = 0;
long long int var_20 = -5586922442017488602LL;
unsigned short var_21 = (unsigned short)65532;
long long int var_22 = 7411098818756524967LL;
int var_23 = 669806530;
signed char var_24 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
