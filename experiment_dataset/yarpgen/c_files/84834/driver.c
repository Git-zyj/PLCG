#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 663699228538018492LL;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 531409774U;
unsigned char var_7 = (unsigned char)39;
int zero = 0;
long long int var_10 = -6183833644628129166LL;
signed char var_11 = (signed char)68;
unsigned char var_12 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
