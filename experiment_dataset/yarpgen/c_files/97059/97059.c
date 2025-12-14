/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 += -11;
        var_15 = ((min((((-5624412744376071540 + 9223372036854775807) << (((-1 + 37) - 36)))), ((((-1 + 2147483647) << (((-4053357639568921163 + 4053357639568921186) - 23))))))));
        var_16 -= (((3 << (8778913153024 - 8778913153016))));
        var_17 &= (((arr_1 [i_0] [i_0]) & -8778913153027));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_2] [i_1] = (arr_5 [i_1] [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 += ((31543 ? (max(34359214080, 70)) : 8778913153024));
                        var_19 = 31543;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_17 [i_5] = ((var_3 || ((((arr_14 [i_1] [i_5] [i_5]) | var_10)))));
            arr_18 [i_1] [i_5] [i_5] = ((((((32765 ? (arr_14 [i_1] [1] [i_1]) : (arr_9 [i_1] [1] [1] [i_5]))))) ? (arr_11 [i_1] [i_1] [23]) : 127));
        }
        arr_19 [i_1] &= (arr_12 [18] [i_1] [i_1] [i_1] [1]);
        var_20 |= (arr_0 [i_1]);
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        var_21 |= (arr_12 [i_6] [i_6] [i_6 + 2] [i_6] [i_6]);
        var_22 = ((((max(-31396, -26339))) ? (((arr_11 [i_6 - 1] [16] [i_6 + 3]) & var_11)) : var_7));
    }
    var_23 += ((((var_8 * 0) + 2147483647)));
    #pragma endscop
}
