#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47153;
unsigned short var_4 = (unsigned short)10932;
unsigned short var_10 = (unsigned short)50090;
int zero = 0;
unsigned short var_12 = (unsigned short)15310;
unsigned short var_13 = (unsigned short)57439;
unsigned short var_14 = (unsigned short)61581;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
