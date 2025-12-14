#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
unsigned long long int var_7 = 15848903419941404473ULL;
unsigned long long int var_16 = 6163535050553725932ULL;
short var_17 = (short)-2337;
unsigned long long int var_18 = 13608723016645319977ULL;
int var_19 = 192591304;
int zero = 0;
unsigned long long int var_20 = 16069553319312777791ULL;
_Bool var_21 = (_Bool)0;
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
