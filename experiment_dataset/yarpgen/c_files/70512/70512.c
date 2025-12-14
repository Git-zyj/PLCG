/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (var_2 % ((4294967295 ? (var_6 & var_2) : ((((-2147483647 - 1) > -6954))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((max(((max(var_1, var_14))), (max((arr_2 [i_0]), 67108860)))) << (var_10 - 8315145382648806890))))));
                arr_6 [i_0] = (((((((max((arr_2 [i_0]), var_2))) ? var_2 : (var_5 + var_8)))) ? (((var_19 + 2147483647) >> ((((var_13 ? 63 : var_14)) - 50)))) : (14774 - var_2)));
                arr_7 [i_0 + 1] [i_1] = ((!((max((arr_5 [i_1] [i_0]), 232)))));
                var_22 = (!var_13);
            }
        }
    }
    var_23 = (-22519 ? ((var_3 ? (((var_19 + 2147483647) << (240 - 240))) : var_5)) : var_16);
    var_24 = (max(var_24, (((var_11 ? ((((var_6 * var_11) ^ var_16))) : ((((min(var_5, var_15))) ? var_8 : (min(var_2, 3716398276)))))))));
    #pragma endscop
}
