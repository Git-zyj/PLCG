#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5540;
int var_3 = -1407872038;
long long int var_4 = 2723163060672111555LL;
short var_6 = (short)-11455;
unsigned long long int var_8 = 3691836020548100946ULL;
signed char var_10 = (signed char)-54;
int var_12 = 377078851;
unsigned int var_13 = 281676684U;
unsigned long long int var_15 = 10738147756598223519ULL;
long long int var_16 = 8975418982848591771LL;
unsigned long long int var_17 = 15686168833730449996ULL;
signed char var_18 = (signed char)68;
int zero = 0;
long long int var_19 = -9043721386104277645LL;
long long int var_20 = -8110465752594419296LL;
signed char var_21 = (signed char)-71;
long long int var_22 = 3821494453176572145LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
