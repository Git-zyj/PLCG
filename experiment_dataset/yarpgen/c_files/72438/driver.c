#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14781671315872412155ULL;
int var_1 = -707733823;
unsigned short var_2 = (unsigned short)52562;
unsigned long long int var_4 = 8074932870251002816ULL;
signed char var_5 = (signed char)108;
int var_11 = 636804723;
short var_15 = (short)-5023;
int zero = 0;
short var_18 = (short)4618;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-24124;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
