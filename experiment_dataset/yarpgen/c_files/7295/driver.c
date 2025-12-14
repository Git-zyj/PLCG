#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9249937605074031045ULL;
long long int var_1 = 5449602415217406404LL;
long long int var_2 = 8684484542782378894LL;
long long int var_5 = 2651989650485503306LL;
unsigned long long int var_6 = 11028560849326526976ULL;
unsigned short var_7 = (unsigned short)27563;
unsigned long long int var_9 = 3633266394421010859ULL;
unsigned int var_10 = 1546122770U;
long long int var_12 = 3306348443059299329LL;
unsigned short var_13 = (unsigned short)52340;
int zero = 0;
long long int var_14 = 1671346654202872947LL;
unsigned int var_15 = 3129267419U;
unsigned short var_16 = (unsigned short)20140;
short var_17 = (short)-2287;
void init() {
}

void checksum() {
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
