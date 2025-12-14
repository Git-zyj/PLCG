#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1158107331U;
long long int var_5 = -381353001386543279LL;
int var_9 = 613100523;
unsigned short var_15 = (unsigned short)4109;
int zero = 0;
long long int var_19 = 4299820606846615861LL;
short var_20 = (short)-20356;
signed char var_21 = (signed char)-23;
short var_22 = (short)22985;
short var_23 = (short)-17600;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
