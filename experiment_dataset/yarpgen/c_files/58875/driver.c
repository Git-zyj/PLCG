#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-72;
short var_3 = (short)-20683;
signed char var_4 = (signed char)81;
_Bool var_5 = (_Bool)1;
int var_6 = 2080338291;
unsigned long long int var_7 = 152715709193466508ULL;
unsigned char var_8 = (unsigned char)159;
int var_9 = -1919964897;
int zero = 0;
int var_14 = 1207153853;
signed char var_15 = (signed char)36;
long long int var_16 = 5933662608761340065LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
