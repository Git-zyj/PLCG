#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11472324633027959845ULL;
unsigned short var_4 = (unsigned short)57001;
unsigned long long int var_5 = 9428993502902877658ULL;
long long int var_6 = 8050798320457430989LL;
long long int var_11 = 4089277296374339901LL;
signed char var_14 = (signed char)71;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)37;
long long int var_18 = 7910041973168708312LL;
signed char var_19 = (signed char)81;
unsigned int var_20 = 3536379964U;
long long int var_21 = 3973266128429021212LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
