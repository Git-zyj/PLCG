#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31598;
long long int var_4 = 2721506600463963977LL;
unsigned int var_5 = 3453150012U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-54;
unsigned short var_9 = (unsigned short)61128;
unsigned int var_11 = 3181841880U;
int zero = 0;
unsigned char var_13 = (unsigned char)211;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)36861;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
