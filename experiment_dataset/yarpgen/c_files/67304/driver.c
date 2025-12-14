#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1926344207;
unsigned long long int var_3 = 1545996525494568282ULL;
int var_4 = -2134176802;
long long int var_6 = -4559070499134504513LL;
unsigned long long int var_7 = 4716355334959577077ULL;
unsigned long long int var_13 = 5051965063911528760ULL;
int zero = 0;
unsigned int var_16 = 3548760430U;
unsigned long long int var_17 = 8663585309454157883ULL;
signed char var_18 = (signed char)1;
unsigned char var_19 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
