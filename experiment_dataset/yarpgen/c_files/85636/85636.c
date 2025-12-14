/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(((var_3 ? var_14 : var_3)), (var_16 || var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max(((max(-32760, var_0))), ((var_1 ? var_4 : (arr_3 [i_1])))));
                arr_8 [i_0] [i_1] = (arr_5 [i_0] [i_0]);
                arr_9 [8] [17] [i_0] = ((-((((5 ? -17739 : -24))))));
                var_20 = (min(var_20, var_0));
            }
        }
    }

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_21 = (((((8710 ? var_16 : ((((arr_3 [i_2]) == var_9)))))) ? var_10 : (((!235) ? (arr_2 [i_2 - 2]) : (arr_2 [i_2])))));
        arr_13 [8] = ((((max(var_17, (arr_3 [i_2])))) << (((((min(227, -1)) + 18)) - 17))));
        arr_14 [i_2] = (min(((max(59063, -119))), (-677796299 + -10889)));
        arr_15 [1] = var_14;
        var_22 = (max(var_22, 1011439738));
    }
    #pragma endscop
}
