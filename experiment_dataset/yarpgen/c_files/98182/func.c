/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98182
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) ((5833232830329541522LL) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (var_0))))));
                arr_4 [i_1] = ((/* implicit */unsigned int) (-(0LL)));
            }
        } 
    } 
    var_16 = max((((((/* implicit */_Bool) ((long long int) (short)7623))) ? (((((/* implicit */_Bool) 147732069)) ? (((/* implicit */int) (short)-7617)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 147732090))))))), (((((int) var_13)) + (((/* implicit */int) var_13)))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6850))))) : (var_14)));
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_2 + 3] [i_2 + 3]), (((/* implicit */unsigned int) var_6))))) ? (((arr_6 [i_2 + 3] [i_2 + 3]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))));
        var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 2443754112U)) ? (147732069) : ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))));
    }
}
