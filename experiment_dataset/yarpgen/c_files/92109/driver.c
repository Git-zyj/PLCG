#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)180;
unsigned int var_7 = 1634392546U;
unsigned long long int var_9 = 7566054446322191527ULL;
unsigned long long int var_12 = 14617693409048721625ULL;
unsigned short var_13 = (unsigned short)20521;
unsigned short var_14 = (unsigned short)55428;
unsigned short var_15 = (unsigned short)35845;
unsigned long long int var_17 = 4925695079974681082ULL;
int zero = 0;
long long int var_19 = -6447850547691215599LL;
unsigned int var_20 = 1303126779U;
unsigned short var_21 = (unsigned short)26587;
short var_22 = (short)30587;
unsigned int var_23 = 961640624U;
void init() {
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
