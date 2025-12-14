#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)35;
int var_3 = 353898595;
signed char var_5 = (signed char)7;
signed char var_7 = (signed char)22;
signed char var_9 = (signed char)25;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
unsigned long long int var_13 = 9212082363078966099ULL;
unsigned long long int var_14 = 12633774235077454273ULL;
unsigned short var_15 = (unsigned short)8524;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
