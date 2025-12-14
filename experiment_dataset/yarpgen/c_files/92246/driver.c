#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2014045225;
signed char var_9 = (signed char)30;
signed char var_11 = (signed char)-103;
int var_12 = 234645302;
long long int var_13 = 1514276046634578735LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5338441588236159051LL;
int zero = 0;
int var_18 = -372347235;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
