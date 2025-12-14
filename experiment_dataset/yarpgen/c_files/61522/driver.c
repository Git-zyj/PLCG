#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3567065507281617555ULL;
unsigned char var_6 = (unsigned char)181;
_Bool var_7 = (_Bool)0;
short var_16 = (short)11456;
unsigned long long int var_17 = 1685348824331391241ULL;
unsigned long long int var_19 = 13734583075048389254ULL;
int zero = 0;
unsigned int var_20 = 807057377U;
unsigned long long int var_21 = 9942962274662421935ULL;
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
