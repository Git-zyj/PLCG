/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_5, var_10));
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((max(1, 135)))) == (((arr_4 [i_0 + 1] [i_1]) ? var_9 : (arr_4 [i_1] [i_0 + 1])))));
                var_18 += (((~var_1) ^ ((135 ? 3327447806 : 0))));
                arr_7 [i_0] [i_1] = (65535 ? ((max((arr_1 [i_0]), (arr_1 [i_0 - 1])))) : 0);
                arr_8 [i_0] = (max(1, 3327447806));
            }
        }
    }
    var_19 = ((((((((var_1 ? -98 : 52906))) / (max(var_12, var_14))))) ? ((((max(var_12, 128))) ? 1319032558 : (!var_7))) : var_11));
    #pragma endscop
}
