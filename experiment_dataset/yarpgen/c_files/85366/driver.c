#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3254396021558275479LL;
unsigned long long int var_3 = 199004596396902092ULL;
unsigned int var_5 = 3468798891U;
short var_7 = (short)16064;
signed char var_9 = (signed char)107;
signed char var_13 = (signed char)-54;
long long int var_15 = -8179520029654978472LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)116;
signed char var_21 = (signed char)54;
void init() {
}

void checksum() {
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
