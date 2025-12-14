#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 786509735;
signed char var_2 = (signed char)40;
signed char var_3 = (signed char)-60;
unsigned long long int var_4 = 3594461212973023560ULL;
signed char var_6 = (signed char)58;
unsigned long long int var_8 = 16086122361026270330ULL;
unsigned short var_9 = (unsigned short)21663;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)16478;
signed char var_12 = (signed char)-46;
unsigned int var_13 = 1680852823U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
