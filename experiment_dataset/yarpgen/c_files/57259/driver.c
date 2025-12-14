#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5962269861041427563LL;
unsigned char var_2 = (unsigned char)224;
unsigned long long int var_3 = 7787230642000977296ULL;
short var_6 = (short)15235;
long long int var_8 = -3819636630978872822LL;
unsigned int var_9 = 4226032734U;
signed char var_12 = (signed char)81;
unsigned short var_14 = (unsigned short)555;
int zero = 0;
unsigned short var_19 = (unsigned short)37441;
signed char var_20 = (signed char)98;
long long int var_21 = 131972579768528443LL;
int var_22 = -1008264631;
unsigned int var_23 = 1699230586U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
