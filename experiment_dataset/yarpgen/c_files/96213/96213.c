/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 += ((1 ? (((((14892979511954445901 ? 4173272257 : var_7))) ? (var_13 < 1) : ((-6571 ? 121695033 : var_11)))) : -5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] = ((((((121695026 ? 1 : 27579))) - (2916736205 * 1))) >> ((((((arr_14 [i_4] [i_1] [i_3] [i_2] [i_1] [9]) | 1))) ? (((var_7 ? 1 : 335))) : (max(var_17, -19)))));
                                var_21 = (min(var_21, (((2764780731593100729 ? (-32767 - 1) : -11726)))));
                                var_22 -= (min((min(var_2, (-2147483647 - 1))), ((((var_18 - 53768) && ((max((arr_0 [i_0]), var_11))))))));
                                arr_16 [14] [14] [14] [i_4] [2] = (min(-5883151959824678070, 1));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] = ((((max((121695023 * 137), 340165320))) ? 13 : (14892979511954445905 * 1)));
                        arr_20 [i_5] = (((13 ? -1996620994822597526 : 1)) == 4173272252);
                        arr_21 [i_0] [i_0] [i_0] [i_2] [i_0] = ((121695042 ? (min(121695056, var_0)) : (!3)));
                        var_23 = (-1 || 8);
                        arr_22 [i_0] [i_1] [i_2] [i_5] [i_2] [i_0] = ((12 ? 4173272272 : 121695044));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_24 = (((-5883151959824678052 ? (-9223372036854775807 - 1) : var_13)) + (3203245474 < 3553764561755105710));
                        var_25 += ((!(((var_14 ? var_8 : var_1)))));
                        var_26 |= 6717788360421230478;
                    }
                    arr_25 [i_2] [i_1] [2] [i_0] = (((((-5 ? 1 : 121695023))) ? ((((min(var_1, var_12))) ? ((var_18 & (arr_6 [i_0] [i_0] [19]))) : 1094)) : (4173272257 < -1929791069)));
                }
            }
        }
    }
    #pragma endscop
}
