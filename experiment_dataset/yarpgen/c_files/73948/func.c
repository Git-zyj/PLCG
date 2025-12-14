/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73948
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [8] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_14 = ((/* implicit */signed char) (~(arr_0 [i_0])));
        var_15 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483647)), (((((/* implicit */_Bool) 2830813383U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_1 [1LL] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_1] [(unsigned char)0] [i_0 - 1] &= ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_5 [i_0 - 1] [i_1 - 1]), (arr_5 [(unsigned char)15] [(unsigned char)15]))))));
            var_17 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((-1415246764), (-2147483647)))))) || (((/* implicit */_Bool) 2147483647))));
        }
    }
}
