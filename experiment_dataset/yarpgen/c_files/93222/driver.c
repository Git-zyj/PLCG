#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
unsigned int var_3 = 279780947U;
int var_6 = 292579951;
unsigned long long int var_9 = 4911668304486277512ULL;
unsigned int var_11 = 3831073002U;
short var_17 = (short)22304;
int zero = 0;
long long int var_20 = 286986148043079883LL;
unsigned long long int var_21 = 9726670046086774962ULL;
unsigned int var_22 = 282859665U;
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
