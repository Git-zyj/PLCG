#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
long long int var_1 = 8290756877017885135LL;
long long int var_2 = 5410177062138601716LL;
long long int var_3 = -5407978507629060178LL;
long long int var_4 = 4453238385321548474LL;
long long int var_6 = -6725719455989781608LL;
long long int var_7 = -5622849339216952117LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 13200626854482794347ULL;
int zero = 0;
unsigned long long int var_11 = 4815742888055607160ULL;
signed char var_12 = (signed char)-120;
int var_13 = -1764775378;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
