/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76124
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 *= ((/* implicit */short) ((var_5) * (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
        var_12 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16376))) % (arr_0 [i_0])));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)33078);
                    var_14 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [(unsigned short)8] [3]))) + (281474976710655LL))))));
                }
            } 
        } 
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) 4721357946045576165LL)) ? ((~(766315134U))) : (var_9))))));
    }
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
}
