#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -413081145684925862LL;
signed char var_2 = (signed char)34;
int var_9 = -650789613;
unsigned short var_11 = (unsigned short)12206;
int var_18 = -1307754208;
int zero = 0;
long long int var_19 = 4393322392708577242LL;
unsigned short var_20 = (unsigned short)22145;
signed char var_21 = (signed char)-81;
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
