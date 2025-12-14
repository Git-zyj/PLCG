#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
unsigned char var_2 = (unsigned char)222;
unsigned long long int var_13 = 10284765547110058462ULL;
int zero = 0;
int var_18 = -1883995542;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-55;
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
