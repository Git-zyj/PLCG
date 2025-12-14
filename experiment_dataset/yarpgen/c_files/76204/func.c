/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76204
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) var_12)))))) < (max((((/* implicit */long long int) var_14)), (var_2)))));
    var_21 = ((/* implicit */unsigned short) var_18);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (short)2061);
        var_23 += ((/* implicit */signed char) ((((-1LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)83))))) : (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-100))))) / (arr_0 [i_0] [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) 18446744073709551615ULL);
        var_25 = ((/* implicit */unsigned short) arr_4 [i_1]);
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 18446744073709551615ULL))));
        var_27 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_19)), (0ULL)))))));
    }
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((5995362699818237044LL), (((/* implicit */long long int) var_8))))) || ((!(((/* implicit */_Bool) var_18))))))), ((~((-(775215079153456687ULL))))))))));
}
