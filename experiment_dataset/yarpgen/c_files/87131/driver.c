#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 746072691;
int var_2 = 1093079282;
long long int var_4 = 5557976693057379145LL;
long long int var_5 = 6057396614345552703LL;
unsigned int var_6 = 3679487228U;
unsigned int var_8 = 1031310780U;
int var_12 = 1925570121;
unsigned int var_13 = 1610354165U;
short var_15 = (short)-3319;
signed char var_16 = (signed char)24;
int zero = 0;
unsigned long long int var_19 = 17448594666749960043ULL;
unsigned char var_20 = (unsigned char)6;
unsigned long long int var_21 = 11551689501481503515ULL;
int var_22 = -1733989898;
unsigned short var_23 = (unsigned short)63127;
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
