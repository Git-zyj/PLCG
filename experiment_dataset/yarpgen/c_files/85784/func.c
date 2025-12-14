/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85784
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 134217664U)) ? (((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_0 - 3])) : (4160749632U)));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */signed char) ((134217664U) - (((/* implicit */unsigned int) 2007242047))));
                    var_18 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_19 = ((/* implicit */_Bool) arr_12 [i_3]);
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_14 [i_3])))) ? (arr_12 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_14 [i_3])))))));
    }
    var_21 ^= ((/* implicit */int) var_12);
}
