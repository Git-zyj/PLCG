#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-69;
long long int var_6 = 7560066952544032718LL;
unsigned int var_14 = 440689273U;
int zero = 0;
int var_16 = 1454964500;
int var_17 = 566280930;
unsigned char var_18 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
