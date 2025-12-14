/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63061
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
    var_20 = ((/* implicit */unsigned long long int) (~(((var_14) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (+(((arr_2 [i_1 - 1] [i_0 - 1]) | (arr_2 [i_1 - 2] [i_0 - 1])))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_18))));
                            arr_10 [(short)1] [i_0 - 1] = ((/* implicit */int) arr_3 [i_3] [i_1] [i_0 - 1]);
                            var_23 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2] [i_1] [i_1])))))))));
                        }
                    } 
                } 
                var_24 += (+(((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 2])));
                var_25 = min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 - 2])))), (((var_16) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_1 - 2])))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */int) var_12)) & (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_1)) : (((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_19))))))));
}
