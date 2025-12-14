#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)145;
short var_4 = (short)-10564;
unsigned int var_5 = 4006688070U;
int var_8 = 73510812;
signed char var_9 = (signed char)-76;
signed char var_12 = (signed char)111;
int zero = 0;
unsigned long long int var_13 = 14057112689973312521ULL;
signed char var_14 = (signed char)122;
signed char var_15 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
