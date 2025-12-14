/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62593
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((-2070481778) / (16383)))));
                            var_15 = max((((/* implicit */int) ((((/* implicit */_Bool) -386656197)) || (((/* implicit */_Bool) -386656197))))), (-16386));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = var_11;
                var_16 = 230384209;
                arr_16 [i_0] [7] = ((/* implicit */int) ((var_13) != (1117754959)));
                arr_17 [14] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -386656197)) ? (-1) : (-2070481793)))) || (((/* implicit */_Bool) 63))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (var_9)));
    var_18 &= ((/* implicit */int) ((((int) var_5)) == (var_5)));
}
