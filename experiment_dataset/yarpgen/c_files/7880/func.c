/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7880
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
    var_14 = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) var_8)) ? (17670654537621559356ULL) : (var_13))))), ((~((~(var_9)))))));
    var_15 = ((/* implicit */int) var_4);
    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17670654537621559348ULL)) ? (((/* implicit */unsigned long long int) 2078194716)) : (13216155384422797232ULL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((776089536087992260ULL), (((/* implicit */unsigned long long int) max(((unsigned char)7), (var_11))))))) ? ((-(arr_0 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-12)), (3811656830U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : ((-(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (17670654537621559361ULL)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) (-(437720769U)));
        var_19 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
    }
    var_20 = ((/* implicit */long long int) var_3);
}
