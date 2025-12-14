#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2831525094U;
unsigned int var_1 = 74739559U;
unsigned long long int var_3 = 4635904332861043170ULL;
unsigned int var_6 = 4028940793U;
long long int var_7 = -4791847869431815593LL;
short var_8 = (short)-31749;
int zero = 0;
int var_10 = 675736051;
unsigned char var_11 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
