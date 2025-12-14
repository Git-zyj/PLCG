#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1315883119U;
signed char var_5 = (signed char)25;
unsigned short var_6 = (unsigned short)51896;
int var_11 = -328988671;
long long int var_13 = -6429401465228381672LL;
int zero = 0;
int var_18 = 317243435;
signed char var_19 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
