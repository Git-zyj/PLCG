/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 26803;
    var_11 -= -var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [5] = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((((((3449 ^ var_2) + (((max(var_5, var_9))))))) ? ((~(arr_5 [i_2] [i_2]))) : (((((-14801 ? 41 : 7849760272576408085)))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_12 = (-9223372036854775807 - 1);
                            arr_17 [i_0] [i_1] = -8524315486277920345;
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_13 = ((+((14792 ? (((arr_8 [i_1] [i_1] [i_2]) - (arr_1 [i_5]))) : (arr_9 [i_0] [i_0] [i_0] [i_3])))));
                            var_14 = ((-1587401333237131784 ^ ((var_6 - (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_15 |= ((((max((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((1 ? 14800 : 6318465763782671146)) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        arr_22 [i_0] = (48 | 9223372036854775807);
                        arr_23 [i_1] [i_1] [16] [i_1] = (arr_19 [i_0] [11] [i_2] [3] [i_1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_28 [i_0] [i_6] [i_7] [i_6] = (-(~35));
                    arr_29 [1] [i_6 - 3] [1] = (arr_24 [i_7]);
                }
            }
        }
        var_16 = (max(6318465763782671146, -1587401333237131784));
        arr_30 [i_0] [i_0] = (((max(((var_9 ? var_1 : (arr_16 [2]))), (arr_27 [i_0] [i_0]))) - (~1)));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        var_17 = (min(var_17, (~var_8)));
        arr_33 [i_8] = ((((var_6 ? (arr_31 [20]) : var_2)) + -var_2));
    }
    var_18 = (((~-var_1) ? (((~((var_3 ? var_9 : -6318465763782671147))))) : (var_1 < 33)));
    #pragma endscop
}
