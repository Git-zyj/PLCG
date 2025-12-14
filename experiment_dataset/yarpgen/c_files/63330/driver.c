#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)70;
unsigned long long int var_2 = 1806300207577052112ULL;
unsigned short var_3 = (unsigned short)26423;
int zero = 0;
long long int var_11 = -8982060965998648503LL;
unsigned char var_12 = (unsigned char)207;
unsigned long long int var_13 = 1006988141238430446ULL;
unsigned long long int var_14 = 6328551118491116042ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
