#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48057;
signed char var_6 = (signed char)114;
signed char var_7 = (signed char)22;
int var_8 = 217138721;
signed char var_9 = (signed char)-7;
long long int var_10 = 4591597708049547968LL;
int zero = 0;
unsigned int var_12 = 640484322U;
unsigned int var_13 = 223085171U;
int var_14 = -786222332;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
