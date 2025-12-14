#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-104;
long long int var_10 = 1589553342228337041LL;
unsigned long long int var_11 = 16513603383666710067ULL;
unsigned int var_12 = 3627118372U;
short var_13 = (short)-28502;
signed char var_14 = (signed char)99;
signed char var_15 = (signed char)-79;
signed char var_16 = (signed char)34;
unsigned long long int var_17 = 13788908087102099008ULL;
int zero = 0;
signed char var_19 = (signed char)116;
unsigned short var_20 = (unsigned short)37841;
unsigned long long int var_21 = 9273461722969659137ULL;
signed char var_22 = (signed char)-100;
unsigned long long int var_23 = 16216096619867955066ULL;
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
