#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2910216723U;
unsigned char var_3 = (unsigned char)162;
long long int var_8 = -6273255916273416230LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-19717;
short var_13 = (short)-4430;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
