#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5045076136173983488LL;
signed char var_7 = (signed char)35;
long long int var_8 = -6502760652039558233LL;
long long int var_9 = 5873971515464185453LL;
unsigned long long int var_13 = 15006779512952775286ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)125;
unsigned long long int var_19 = 17960483125072349423ULL;
signed char var_20 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
