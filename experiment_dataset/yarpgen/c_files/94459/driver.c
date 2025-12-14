#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)80;
unsigned long long int var_6 = 9724273236321090735ULL;
int var_8 = 2091042044;
int var_9 = -1918100411;
int var_11 = -896512838;
signed char var_12 = (signed char)19;
int var_15 = -1097885014;
unsigned long long int var_17 = 9060054339178895694ULL;
int zero = 0;
unsigned long long int var_19 = 16485755458681613585ULL;
signed char var_20 = (signed char)38;
int var_21 = 439048533;
unsigned short var_22 = (unsigned short)12681;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
