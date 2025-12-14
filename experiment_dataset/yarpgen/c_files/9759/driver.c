#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4572;
signed char var_3 = (signed char)-52;
unsigned int var_8 = 691823427U;
int zero = 0;
unsigned long long int var_10 = 9446894014675314486ULL;
signed char var_11 = (signed char)-23;
short var_12 = (short)12626;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
