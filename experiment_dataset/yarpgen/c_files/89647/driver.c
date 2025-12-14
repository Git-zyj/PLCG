#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 247177843U;
int var_1 = 838484367;
unsigned short var_4 = (unsigned short)63076;
_Bool var_6 = (_Bool)0;
int var_7 = -561020263;
signed char var_9 = (signed char)-62;
int zero = 0;
unsigned short var_13 = (unsigned short)32288;
signed char var_14 = (signed char)69;
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
