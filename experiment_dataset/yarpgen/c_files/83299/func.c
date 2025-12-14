/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83299
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (18446744073709551615ULL)))))), (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) ((17301188422270441867ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */unsigned short) (short)16061);
                var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_4 [i_1 - 1] [22]) : (arr_4 [i_1] [i_0]))) : (((((/* implicit */int) arr_3 [i_0] [i_0 - 3] [i_1])) + ((-2147483647 - 1))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(var_12))))))));
    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? ((((+(((/* implicit */int) (unsigned char)76)))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)-32764)) || (var_12)))))) : (((((/* implicit */int) var_0)) + ((~(var_4)))))));
}
