/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93353
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (~(max((var_1), (((/* implicit */long long int) arr_3 [i_0])))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_13 = ((/* implicit */short) arr_0 [i_1] [i_0]);
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [(short)0] [i_2]) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))));
                var_15 = ((/* implicit */short) arr_1 [4]);
                arr_9 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2 - 1] [i_1])), (var_2)))) : (var_0)));
            }
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((_Bool) var_10)))));
                var_17 = ((/* implicit */int) arr_10 [i_0] [i_0]);
            }
            var_18 = ((/* implicit */long long int) (((+(var_2))) + (((/* implicit */unsigned int) min((arr_13 [i_0] [i_3] [i_3]), (arr_13 [i_0] [i_3] [i_0]))))));
        }
        arr_14 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (short)6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_12 [i_0] [i_0]))))) & (min((((/* implicit */long long int) arr_3 [i_0])), (arr_10 [i_0] [i_0])))));
    }
    var_19 -= var_9;
}
