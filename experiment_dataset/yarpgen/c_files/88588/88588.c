/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 += ((((((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : var_1))) && ((min((arr_4 [i_0 - 1]), (arr_4 [i_0 + 1]))))));
                var_13 = (min(var_13, (var_5 | 255)));
                var_14 *= 0;
                var_15 = (arr_4 [i_0 - 1]);
                var_16 = (min(var_16, (((((arr_0 [i_0]) > (min((arr_3 [i_0] [i_0] [1]), (arr_3 [i_0] [9] [9])))))))));
            }
        }
    }
    var_17 = var_10;
    var_18 = (((max(var_9, ((var_1 ? -2721025164921199632 : 32519)))) >= ((((var_6 && 1) ? -0 : (var_4 < var_11))))));
    var_19 = (((var_5 < (min(var_10, var_2)))));
    var_20 = var_5;
    #pragma endscop
}
