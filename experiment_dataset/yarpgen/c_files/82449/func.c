/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82449
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0]))));
        var_20 &= ((/* implicit */short) 10665886874403041696ULL);
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((10652997975734248515ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4238))))) ? (10652997975734248515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107)))))))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 515918426433547437LL))))))));
        var_23 = ((/* implicit */short) 7793746097975303092ULL);
    }
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_6))))));
}
