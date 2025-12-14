#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-10;
int var_10 = -1925991877;
unsigned char var_15 = (unsigned char)242;
unsigned long long int var_16 = 1737535970530806438ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)180;
unsigned long long int var_19 = 12616946632268001689ULL;
signed char var_20 = (signed char)-76;
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
