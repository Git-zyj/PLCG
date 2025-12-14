#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1420813510346387343ULL;
unsigned long long int var_1 = 12546954821333375887ULL;
signed char var_5 = (signed char)-24;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 16322408353645322391ULL;
unsigned long long int var_11 = 12170599011426612267ULL;
int zero = 0;
unsigned long long int var_20 = 7959000588913390293ULL;
unsigned long long int var_21 = 5499050688960255755ULL;
void init() {
}

void checksum() {
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
