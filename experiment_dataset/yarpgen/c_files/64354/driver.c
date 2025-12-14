#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 480031908;
unsigned short var_1 = (unsigned short)12196;
long long int var_2 = 1770115916864264402LL;
long long int var_3 = -2717861292022987210LL;
unsigned char var_4 = (unsigned char)123;
unsigned int var_7 = 1487589285U;
int zero = 0;
int var_11 = -807257587;
unsigned short var_12 = (unsigned short)52194;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
