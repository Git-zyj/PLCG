#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8616548524397656332LL;
short var_4 = (short)-2721;
unsigned char var_6 = (unsigned char)41;
signed char var_8 = (signed char)-16;
long long int var_11 = 6079049273966211006LL;
unsigned char var_13 = (unsigned char)193;
int zero = 0;
signed char var_14 = (signed char)120;
signed char var_15 = (signed char)-12;
long long int var_16 = -525144803844986768LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
