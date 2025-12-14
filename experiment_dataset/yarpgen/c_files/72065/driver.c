#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-13;
signed char var_5 = (signed char)-27;
unsigned int var_8 = 106191526U;
long long int var_9 = 9019500044346403728LL;
int zero = 0;
long long int var_13 = 818460816591531179LL;
unsigned long long int var_14 = 4147534373344428342ULL;
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
