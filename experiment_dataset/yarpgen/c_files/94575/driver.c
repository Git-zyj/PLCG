#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-124;
short var_4 = (short)-10876;
unsigned char var_9 = (unsigned char)63;
signed char var_10 = (signed char)-111;
long long int var_14 = -8738576366169184260LL;
int zero = 0;
unsigned char var_18 = (unsigned char)39;
signed char var_19 = (signed char)-96;
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
