/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_6));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (arr_5 [1] [i_1]);
                    var_19 = (((var_10 ? 0 : (arr_0 [i_1 - 1]))));
                    var_20 = (-13 ? ((min(((12 ? 34 : (arr_4 [i_0]))), var_0))) : (((arr_3 [i_0 + 1]) ? var_11 : (arr_3 [i_0 + 1]))));
                }
            }
        }
    }
    var_21 = var_11;
    var_22 = (((((((-9 ? -4 : 10))) ? (var_16 == 3714948575184352996) : var_12))) <= (((~var_6) ? (((10 ? var_7 : 235))) : ((var_13 ? var_6 : var_0)))));
    #pragma endscop
}
