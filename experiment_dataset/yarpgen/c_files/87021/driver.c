#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1076330869750115838LL;
_Bool var_10 = (_Bool)1;
unsigned char var_16 = (unsigned char)26;
int zero = 0;
long long int var_18 = 7446607018228233826LL;
short var_19 = (short)-18331;
unsigned char var_20 = (unsigned char)240;
unsigned long long int var_21 = 8007089459239218843ULL;
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
