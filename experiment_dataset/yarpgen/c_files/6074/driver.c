#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3125925646374083047LL;
long long int var_4 = 2410477788658851483LL;
signed char var_9 = (signed char)119;
int zero = 0;
signed char var_18 = (signed char)-24;
long long int var_19 = 46834001185124961LL;
unsigned char var_20 = (unsigned char)51;
signed char var_21 = (signed char)-67;
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
