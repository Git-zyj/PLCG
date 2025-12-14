#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27257;
short var_3 = (short)19733;
unsigned long long int var_4 = 1781419803891828276ULL;
unsigned int var_6 = 1530025841U;
unsigned int var_7 = 699382487U;
unsigned int var_10 = 3449619863U;
int var_11 = -881398349;
int zero = 0;
unsigned int var_12 = 1488317734U;
unsigned int var_13 = 2833228298U;
short var_14 = (short)30460;
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
