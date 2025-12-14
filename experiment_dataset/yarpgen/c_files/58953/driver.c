#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)141;
unsigned long long int var_8 = 6053604955716636309ULL;
unsigned long long int var_18 = 11507848890813325830ULL;
int zero = 0;
unsigned long long int var_19 = 15153744202472710247ULL;
long long int var_20 = 7609021824193964412LL;
int var_21 = -437011383;
unsigned long long int var_22 = 3528899116686180469ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
