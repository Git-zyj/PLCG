#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -652275220;
unsigned short var_5 = (unsigned short)56050;
unsigned long long int var_6 = 4304659746806485459ULL;
unsigned long long int var_13 = 13309593829833687633ULL;
signed char var_16 = (signed char)-62;
int zero = 0;
unsigned short var_18 = (unsigned short)12322;
unsigned short var_19 = (unsigned short)44726;
long long int var_20 = 370164282872246983LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
