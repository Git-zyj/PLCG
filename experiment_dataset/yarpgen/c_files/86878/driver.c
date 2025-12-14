#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12074883916927128116ULL;
signed char var_12 = (signed char)-10;
unsigned long long int var_13 = 12200279551749024045ULL;
unsigned int var_16 = 1990547889U;
int var_17 = 1407272860;
short var_18 = (short)-4118;
unsigned int var_19 = 3510760030U;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)36;
short var_22 = (short)-22958;
short var_23 = (short)-27035;
unsigned short var_24 = (unsigned short)39898;
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
