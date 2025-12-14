#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 233550698;
signed char var_6 = (signed char)-68;
unsigned char var_9 = (unsigned char)238;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5250736734717419187LL;
int zero = 0;
unsigned char var_13 = (unsigned char)132;
int var_14 = 1703695082;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
