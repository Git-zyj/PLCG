#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1114776635;
unsigned short var_1 = (unsigned short)26251;
unsigned long long int var_2 = 3386771396340332606ULL;
signed char var_4 = (signed char)16;
unsigned short var_5 = (unsigned short)61585;
short var_7 = (short)-10972;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-74;
short var_14 = (short)31986;
int zero = 0;
int var_16 = 882659521;
unsigned long long int var_17 = 6243106598563983775ULL;
signed char var_18 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
