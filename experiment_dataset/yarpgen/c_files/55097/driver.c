#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned short var_3 = (unsigned short)64682;
signed char var_4 = (signed char)93;
long long int var_8 = 214115698421110279LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-109;
int zero = 0;
unsigned short var_13 = (unsigned short)60778;
unsigned long long int var_14 = 14367311663141569454ULL;
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
