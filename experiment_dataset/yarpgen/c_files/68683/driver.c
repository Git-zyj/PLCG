#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
signed char var_5 = (signed char)-75;
long long int var_7 = 5153320527585536396LL;
unsigned int var_15 = 970430471U;
int zero = 0;
unsigned char var_18 = (unsigned char)153;
unsigned char var_19 = (unsigned char)192;
signed char var_20 = (signed char)11;
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
