#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8210256191090719771ULL;
int var_3 = 96782008;
int var_5 = 770688184;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-69;
unsigned long long int var_8 = 3169691748595734305ULL;
unsigned char var_9 = (unsigned char)20;
unsigned long long int var_11 = 7668411910284755226ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1508609778U;
int zero = 0;
signed char var_14 = (signed char)31;
unsigned int var_15 = 4004100773U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
