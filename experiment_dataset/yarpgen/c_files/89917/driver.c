#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-82;
unsigned short var_2 = (unsigned short)39838;
short var_8 = (short)-25675;
int var_9 = 222988768;
int zero = 0;
signed char var_12 = (signed char)57;
int var_13 = 1130210438;
unsigned int var_14 = 3784803453U;
void init() {
}

void checksum() {
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
