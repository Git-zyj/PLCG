#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-104;
unsigned short var_3 = (unsigned short)52841;
int zero = 0;
unsigned short var_18 = (unsigned short)62845;
unsigned short var_19 = (unsigned short)50845;
unsigned short var_20 = (unsigned short)32511;
signed char var_21 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
