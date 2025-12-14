#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 488504987U;
signed char var_1 = (signed char)-49;
signed char var_5 = (signed char)20;
unsigned long long int var_6 = 12898254464820199843ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-50;
int zero = 0;
unsigned char var_10 = (unsigned char)124;
unsigned char var_11 = (unsigned char)188;
int var_12 = -242397119;
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
