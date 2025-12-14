#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3920762882991027913ULL;
_Bool var_6 = (_Bool)1;
signed char var_13 = (signed char)-96;
int zero = 0;
unsigned short var_18 = (unsigned short)64258;
unsigned long long int var_19 = 14210159236391415852ULL;
unsigned char var_20 = (unsigned char)245;
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
