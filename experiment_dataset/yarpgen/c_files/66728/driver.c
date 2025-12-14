#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1207160554;
unsigned char var_2 = (unsigned char)52;
long long int var_4 = -8694237406495404484LL;
signed char var_5 = (signed char)38;
long long int var_6 = 4573421235570913815LL;
unsigned long long int var_7 = 933459356199972702ULL;
int var_9 = -652649687;
int zero = 0;
short var_10 = (short)31170;
int var_11 = -395940110;
short var_12 = (short)18132;
unsigned int var_13 = 2945524906U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
