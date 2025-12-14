#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7112743895266074355LL;
unsigned short var_1 = (unsigned short)2576;
_Bool var_3 = (_Bool)1;
short var_4 = (short)32474;
_Bool var_5 = (_Bool)1;
long long int var_7 = 9073766210693305153LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7980975440222183062LL;
int zero = 0;
short var_10 = (short)5539;
long long int var_11 = 3553096480694026058LL;
short var_12 = (short)-11676;
signed char var_13 = (signed char)37;
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
