/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_15 | var_1) | var_10))) ? (((~(max(var_8, var_15))))) : (((~var_13) ? ((min(var_0, var_13))) : (max(18240126380660472923, var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (((((-(arr_8 [i_0])))) || (!-var_18)));
                    var_21 = (min(var_21, (((((((((-31453 ? var_3 : (arr_6 [i_0] [i_0] [i_2 + 1] [i_0])))) ? var_15 : (~var_5)))) ? (arr_3 [18]) : (((~((1396741863 ? 50 : 4352))))))))));
                }
            }
        }
    }
    #pragma endscop
}
