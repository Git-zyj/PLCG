#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25348;
signed char var_2 = (signed char)-35;
unsigned char var_9 = (unsigned char)24;
unsigned char var_11 = (unsigned char)18;
unsigned char var_15 = (unsigned char)135;
int zero = 0;
long long int var_17 = 5372556220679178999LL;
unsigned short var_18 = (unsigned short)44928;
_Bool var_19 = (_Bool)1;
int var_20 = 738125085;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
