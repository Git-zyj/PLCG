#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9905071887888996631ULL;
short var_1 = (short)-22818;
short var_2 = (short)-25725;
signed char var_3 = (signed char)11;
unsigned int var_4 = 3645391367U;
int var_5 = -281161399;
signed char var_6 = (signed char)-94;
signed char var_7 = (signed char)-111;
int var_8 = 1617989391;
signed char var_9 = (signed char)70;
unsigned long long int var_10 = 14984362573607345835ULL;
int var_11 = 1701616214;
short var_12 = (short)31903;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3405771605U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 395585948U;
short var_17 = (short)29918;
unsigned int var_18 = 3247962282U;
unsigned int var_19 = 2721976385U;
signed char var_20 = (signed char)-73;
unsigned int var_21 = 1469432298U;
unsigned char var_22 = (unsigned char)16;
unsigned char var_23 = (unsigned char)214;
int var_24 = -1324298702;
signed char var_25 = (signed char)-57;
short var_26 = (short)-32105;
unsigned long long int var_27 = 2624138318507812320ULL;
unsigned short var_28 = (unsigned short)61954;
short var_29 = (short)2913;
unsigned char var_30 = (unsigned char)171;
_Bool var_31 = (_Bool)1;
short var_32 = (short)30560;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)15558;
unsigned int var_35 = 3577696885U;
unsigned int var_36 = 1362397327U;
int var_37 = -609357417;
signed char var_38 = (signed char)-117;
unsigned long long int var_39 = 1557077342850848104ULL;
unsigned long long int var_40 = 8775907941327470184ULL;
signed char var_41 = (signed char)-5;
signed char var_42 = (signed char)-60;
long long int var_43 = -6074405918768577876LL;
unsigned int var_44 = 1533813640U;
_Bool var_45 = (_Bool)0;
unsigned char var_46 = (unsigned char)185;
short var_47 = (short)32637;
short var_48 = (short)17434;
unsigned int var_49 = 3116388518U;
signed char var_50 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
