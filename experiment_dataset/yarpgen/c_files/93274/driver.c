#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
signed char var_2 = (signed char)53;
int var_4 = 300147691;
long long int var_5 = -4396185331664968596LL;
unsigned long long int var_6 = 10081353744634096726ULL;
unsigned long long int var_8 = 5564986808127664300ULL;
long long int var_9 = 2730320197038500276LL;
signed char var_10 = (signed char)-53;
int zero = 0;
long long int var_13 = -6058345057320860380LL;
unsigned char var_14 = (unsigned char)134;
signed char var_15 = (signed char)-5;
unsigned long long int var_16 = 14557214713158374525ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
