#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)25;
short var_4 = (short)28090;
unsigned long long int var_6 = 16795391632225452158ULL;
unsigned long long int var_7 = 7067698019200737606ULL;
int var_9 = 977387057;
long long int var_11 = 3085432341983494954LL;
unsigned short var_12 = (unsigned short)65505;
int zero = 0;
unsigned char var_14 = (unsigned char)61;
int var_15 = -759146058;
short var_16 = (short)-2371;
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
