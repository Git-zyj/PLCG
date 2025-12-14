/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82466
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)34))));
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_4 [i_1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_8 [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_5 [i_1] [i_2]))))));
                    var_23 = ((/* implicit */int) arr_6 [i_1] [i_1] [i_0]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1055491058)) || (((/* implicit */_Bool) 8058788336992472128LL))));
                    arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0 - 1])) & (((/* implicit */int) arr_4 [i_0]))));
                    var_24 = ((/* implicit */_Bool) (~(var_9)));
                }
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_1])))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) (+((-((-(((/* implicit */int) var_11))))))));
    var_27 = ((/* implicit */signed char) var_13);
}
