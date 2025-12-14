#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2705529159052134818LL;
unsigned long long int var_1 = 17696433594081685207ULL;
unsigned short var_2 = (unsigned short)52461;
unsigned long long int var_3 = 8806857462053912719ULL;
int var_5 = 1238680585;
long long int var_6 = -303219558469618436LL;
long long int var_7 = 8694114363370435988LL;
signed char var_10 = (signed char)96;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5905100334463712298ULL;
unsigned long long int var_13 = 18260396128830228247ULL;
unsigned short var_14 = (unsigned short)47184;
signed char var_15 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
