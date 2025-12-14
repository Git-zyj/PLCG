/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84366
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
    var_18 = ((/* implicit */unsigned char) var_17);
    var_19 = ((/* implicit */signed char) ((unsigned char) var_7));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_5 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_3] = ((/* implicit */signed char) arr_10 [i_3] [i_2] [i_1] [(short)12]);
                            arr_12 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) ((int) (_Bool)1));
                        }
                    } 
                } 
                var_21 = ((signed char) arr_7 [i_1 + 1] [12U] [i_0] [i_1 - 1]);
            }
        } 
    } 
}
