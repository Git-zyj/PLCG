/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78551
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
    var_20 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (var_17));
    var_21 = ((/* implicit */int) max((var_21), (var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_1 - 1]))));
                            var_23 = ((/* implicit */int) arr_3 [i_0] [12]);
                        }
                    } 
                } 
                var_24 = var_10;
                arr_10 [i_0] [i_0] = arr_9 [i_1 - 2] [i_1] [i_1] [i_1 + 1] [i_1];
            }
        } 
    } 
}
