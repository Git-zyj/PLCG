#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1659710584;
long long int var_2 = -485787763786849943LL;
unsigned char var_3 = (unsigned char)140;
long long int var_7 = 731780595491956677LL;
unsigned int var_8 = 2517230680U;
int zero = 0;
unsigned short var_11 = (unsigned short)18904;
signed char var_12 = (signed char)65;
long long int var_13 = 7068449819262537161LL;
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
