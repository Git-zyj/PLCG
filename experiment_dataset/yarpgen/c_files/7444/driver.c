#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)35562;
unsigned short var_2 = (unsigned short)60956;
int var_3 = 1624698768;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)81;
short var_9 = (short)-19157;
short var_12 = (short)18671;
int zero = 0;
short var_17 = (short)11370;
signed char var_18 = (signed char)86;
long long int var_19 = -3901123633243420945LL;
unsigned long long int var_20 = 16091967835096531862ULL;
unsigned short var_21 = (unsigned short)62618;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
