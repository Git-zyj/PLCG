#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17496085833594362700ULL;
unsigned char var_4 = (unsigned char)221;
int var_5 = -1048364726;
unsigned int var_9 = 2962592424U;
int zero = 0;
signed char var_18 = (signed char)-77;
int var_19 = -256654041;
unsigned long long int var_20 = 4109651401189574710ULL;
signed char var_21 = (signed char)-48;
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
