#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1131962325;
long long int var_10 = -8514038624299234043LL;
int var_11 = -254377251;
unsigned int var_12 = 2039914403U;
long long int var_18 = 720627395902809530LL;
int zero = 0;
unsigned long long int var_19 = 5181848481701824103ULL;
unsigned long long int var_20 = 8011318823293211567ULL;
short var_21 = (short)-21031;
unsigned char var_22 = (unsigned char)203;
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
