#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)44;
unsigned long long int var_13 = 2121317949567161410ULL;
short var_18 = (short)5062;
int zero = 0;
signed char var_20 = (signed char)-103;
int var_21 = 1067659834;
unsigned long long int var_22 = 9481087060312289314ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
