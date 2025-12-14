#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5209488959470698931LL;
unsigned long long int var_7 = 16869870918791711180ULL;
unsigned int var_8 = 2529297304U;
unsigned int var_10 = 3193807837U;
unsigned short var_12 = (unsigned short)29502;
long long int var_15 = -6148050425248712386LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_19 = (short)-24272;
unsigned short var_20 = (unsigned short)5088;
long long int var_21 = 8927306584787463033LL;
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
