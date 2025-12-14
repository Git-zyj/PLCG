#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
int var_4 = -3108851;
unsigned short var_6 = (unsigned short)57953;
int var_8 = 1676169337;
signed char var_9 = (signed char)41;
int zero = 0;
int var_10 = 1878064146;
short var_11 = (short)12751;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
