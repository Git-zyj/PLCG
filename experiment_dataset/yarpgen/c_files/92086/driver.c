#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
unsigned int var_2 = 2857420824U;
signed char var_9 = (signed char)-53;
signed char var_12 = (signed char)83;
short var_15 = (short)-2016;
long long int var_16 = 2886229971018797171LL;
int zero = 0;
long long int var_18 = 434018006096452011LL;
unsigned char var_19 = (unsigned char)49;
void init() {
}

void checksum() {
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
