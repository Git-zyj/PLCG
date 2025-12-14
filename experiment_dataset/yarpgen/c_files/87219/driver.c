#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned char var_5 = (unsigned char)94;
signed char var_9 = (signed char)-66;
int zero = 0;
unsigned int var_11 = 168103876U;
signed char var_12 = (signed char)38;
unsigned short var_13 = (unsigned short)9661;
short var_14 = (short)28723;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
