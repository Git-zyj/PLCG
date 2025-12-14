#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14445336549147376941ULL;
unsigned long long int var_1 = 15639001140911657858ULL;
unsigned long long int var_3 = 8815029860440894597ULL;
unsigned long long int var_4 = 5946284031789282039ULL;
unsigned long long int var_5 = 8735367123088432546ULL;
unsigned long long int var_6 = 10882092527558749656ULL;
unsigned long long int var_9 = 6259750858740448058ULL;
unsigned long long int var_10 = 7596907652440133421ULL;
unsigned long long int var_13 = 3071190974684096252ULL;
int zero = 0;
unsigned long long int var_16 = 17688293540138420510ULL;
unsigned long long int var_17 = 9241649970467926931ULL;
void init() {
}

void checksum() {
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
