#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
int var_3 = -1248464454;
signed char var_4 = (signed char)-103;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 652364800U;
int zero = 0;
int var_20 = -1922409794;
unsigned char var_21 = (unsigned char)20;
signed char var_22 = (signed char)-126;
unsigned int var_23 = 1266374231U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
