#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2573923173U;
long long int var_2 = 1011430359205078250LL;
signed char var_3 = (signed char)-57;
unsigned char var_8 = (unsigned char)26;
unsigned short var_9 = (unsigned short)35540;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-2333;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
