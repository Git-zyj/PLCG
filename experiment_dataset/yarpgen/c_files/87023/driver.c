#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-31;
long long int var_6 = -2686979477531010003LL;
unsigned short var_9 = (unsigned short)2895;
unsigned int var_11 = 1972111501U;
unsigned short var_13 = (unsigned short)55628;
unsigned long long int var_14 = 16950372655407789578ULL;
unsigned long long int var_16 = 2412252364158723084ULL;
unsigned int var_18 = 3808249003U;
unsigned short var_19 = (unsigned short)18631;
int zero = 0;
unsigned int var_20 = 3826768015U;
long long int var_21 = -8595075453007995594LL;
signed char var_22 = (signed char)101;
signed char var_23 = (signed char)45;
void init() {
}

void checksum() {
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
