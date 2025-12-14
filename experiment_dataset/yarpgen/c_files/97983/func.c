/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97983
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] = arr_2 [i_0] [i_0] [i_1];
                arr_6 [i_1] = (~(arr_0 [i_0]));
                var_11 = ((/* implicit */unsigned int) max((var_11), (((var_1) * (arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                var_12 = (~(3478040128U));
                /* LoopNest 3 */
                for (unsigned int i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_13 = max((3478040124U), (((((/* implicit */_Bool) (~(3360878634U)))) ? (min((var_7), (1145421664U))) : (((((/* implicit */_Bool) 858527430U)) ? (arr_13 [i_2]) : (1375385915U))))));
                                arr_20 [i_2] [i_3] [i_2] [i_5 + 2] [i_5] = var_6;
                                var_14 = ((/* implicit */unsigned int) min((var_14), (var_6)));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (var_6)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
