#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2549358590686487197LL;
signed char var_4 = (signed char)20;
signed char var_5 = (signed char)32;
unsigned short var_9 = (unsigned short)18598;
int zero = 0;
long long int var_11 = -7916248181187200859LL;
unsigned long long int var_12 = 4753258859336694387ULL;
unsigned long long int var_13 = 11029339181893446589ULL;
long long int var_14 = -6617736348787690906LL;
signed char var_15 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
