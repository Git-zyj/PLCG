#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
short var_2 = (short)-23303;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)60457;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 13441039472357071356ULL;
unsigned int var_9 = 1366909780U;
unsigned long long int var_10 = 15225044419334641373ULL;
int zero = 0;
short var_11 = (short)-25484;
unsigned short var_12 = (unsigned short)18940;
short var_13 = (short)-26529;
signed char var_14 = (signed char)74;
unsigned int var_15 = 1004675315U;
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
