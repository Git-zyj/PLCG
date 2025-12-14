/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72632
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
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) arr_5 [i_0 + 1] [i_0]);
                var_12 = ((/* implicit */short) max((((/* implicit */int) var_0)), (((((/* implicit */int) arr_1 [i_0])) + (519379402)))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */int) var_2)) + (((/* implicit */int) arr_12 [i_0 + 2] [i_2 + 2] [i_0] [i_3 - 1])))), ((~(((/* implicit */int) arr_12 [i_0 + 2] [i_2 - 1] [i_0] [i_3 + 1]))))));
                            arr_15 [i_0 - 1] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (_Bool)0))));
                            var_13 += ((/* implicit */int) ((signed char) max((((/* implicit */int) var_3)), (var_4))));
                            arr_16 [i_0] [i_1] [i_2] [i_0] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27249))))) ? (arr_0 [i_0]) : (((/* implicit */int) arr_7 [i_0 + 1] [i_2 + 1] [i_3 + 3] [i_3 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 += ((/* implicit */_Bool) var_3);
}
