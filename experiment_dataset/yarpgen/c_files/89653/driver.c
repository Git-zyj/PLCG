#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 839065570;
unsigned long long int var_5 = 1201928359246998923ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)217;
long long int var_9 = -2657697357578877945LL;
int zero = 0;
unsigned char var_12 = (unsigned char)117;
int var_13 = -2126736419;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
