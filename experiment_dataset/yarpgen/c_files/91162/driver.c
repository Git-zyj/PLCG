#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned short var_2 = (unsigned short)57862;
signed char var_4 = (signed char)113;
int var_6 = 1305888061;
signed char var_7 = (signed char)-11;
unsigned short var_9 = (unsigned short)34369;
unsigned short var_10 = (unsigned short)11887;
signed char var_11 = (signed char)-118;
int zero = 0;
unsigned long long int var_12 = 4730452454987761022ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
