#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
signed char var_3 = (signed char)32;
unsigned short var_4 = (unsigned short)25282;
int var_5 = 78037989;
int zero = 0;
unsigned long long int var_11 = 3114795138326359448ULL;
unsigned int var_12 = 838141618U;
int var_13 = 755260033;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
