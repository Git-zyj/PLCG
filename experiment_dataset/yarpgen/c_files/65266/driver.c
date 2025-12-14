#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
signed char var_1 = (signed char)13;
unsigned long long int var_2 = 5269486272467078912ULL;
signed char var_3 = (signed char)70;
unsigned long long int var_4 = 9645881779527310893ULL;
signed char var_9 = (signed char)-43;
signed char var_11 = (signed char)-7;
signed char var_12 = (signed char)-127;
int zero = 0;
short var_13 = (short)712;
unsigned long long int var_14 = 14087433486939572874ULL;
signed char var_15 = (signed char)-67;
signed char var_16 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
