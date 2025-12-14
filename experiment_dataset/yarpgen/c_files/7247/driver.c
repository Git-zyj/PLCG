#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7428624906885237280LL;
unsigned char var_8 = (unsigned char)235;
int var_10 = -1093188922;
unsigned short var_14 = (unsigned short)40014;
int zero = 0;
unsigned char var_18 = (unsigned char)48;
unsigned short var_19 = (unsigned short)41890;
long long int var_20 = -4522840405863460159LL;
long long int var_21 = 4847451201867130634LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
