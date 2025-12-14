#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1923784279;
signed char var_1 = (signed char)120;
unsigned long long int var_3 = 3746112406312505411ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 10808522178479451637ULL;
signed char var_7 = (signed char)-93;
unsigned int var_8 = 3294847950U;
long long int var_9 = 523310677599259276LL;
int zero = 0;
long long int var_11 = -7920467371503741486LL;
unsigned short var_12 = (unsigned short)31046;
unsigned short var_13 = (unsigned short)22160;
unsigned int var_14 = 2980686695U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
