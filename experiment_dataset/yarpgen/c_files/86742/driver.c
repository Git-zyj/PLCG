#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 97541320734831048ULL;
int var_10 = 2027960634;
unsigned short var_19 = (unsigned short)52726;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10305976763713542503ULL;
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
