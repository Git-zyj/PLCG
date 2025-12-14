#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17002452775425931982ULL;
unsigned int var_2 = 4166760954U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 530950703U;
unsigned long long int var_7 = 6986606401820814656ULL;
int var_9 = 1121224502;
int var_11 = -46681452;
unsigned long long int var_12 = 10394079971649940178ULL;
int zero = 0;
long long int var_13 = 7905115198352091920LL;
signed char var_14 = (signed char)119;
void init() {
}

void checksum() {
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
