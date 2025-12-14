#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20173;
long long int var_4 = -3244512047272785318LL;
unsigned short var_6 = (unsigned short)4406;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 5863588116299848886ULL;
signed char var_19 = (signed char)81;
unsigned short var_20 = (unsigned short)64806;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
