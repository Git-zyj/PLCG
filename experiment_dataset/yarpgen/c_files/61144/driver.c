#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18707;
int var_2 = -791982161;
int var_5 = 1832322828;
unsigned short var_6 = (unsigned short)47731;
unsigned long long int var_9 = 12391155228137468804ULL;
long long int var_11 = 6068946543626810981LL;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)19047;
signed char var_17 = (signed char)71;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)5337;
long long int var_22 = 6661149236685201436LL;
unsigned short var_23 = (unsigned short)1465;
signed char var_24 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
