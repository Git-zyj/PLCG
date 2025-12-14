#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)101;
signed char var_3 = (signed char)86;
_Bool var_4 = (_Bool)1;
long long int var_7 = -102846746276695797LL;
int zero = 0;
unsigned int var_13 = 39172808U;
unsigned int var_14 = 995004908U;
void init() {
}

void checksum() {
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
