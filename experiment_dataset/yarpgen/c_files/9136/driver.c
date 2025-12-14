#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7748749823167381816ULL;
unsigned char var_8 = (unsigned char)95;
long long int var_10 = 2619560415416192165LL;
signed char var_14 = (signed char)115;
int zero = 0;
unsigned char var_19 = (unsigned char)175;
long long int var_20 = 4404115947554139716LL;
unsigned short var_21 = (unsigned short)47887;
void init() {
}

void checksum() {
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
