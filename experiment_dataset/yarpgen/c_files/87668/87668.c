/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [1] [i_1] [i_1] = (((((var_19 ? (((arr_2 [i_0]) ? var_5 : (arr_4 [i_0] [i_0]))) : (~60594)))) ? (((((((arr_0 [i_0]) ? 52830 : (arr_3 [i_0] [i_0])))) ? ((var_14 ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0]))) : (var_14 == 2144516827)))) : (min((arr_1 [i_0 + 1]), (max(0, var_12))))));
                var_21 |= (~(302375586 ^ 1));
                arr_6 [1] [i_1] [i_0] = ((((min(52830, (arr_0 [i_0 + 1])))) ? (~1) : var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [3] [0] [1] = (0 / 30590);
                            arr_13 [i_0] [i_0] [i_0] &= var_1;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_22 |= ((((max(61666, var_16))) ? (max(397313999, 556944887)) : ((((var_11 ? (arr_19 [i_7]) : (arr_15 [i_4]))) >> ((((30590 ? -30591 : 2177219498)) - 4294936696))))));
                            arr_24 [i_4] [i_4] [i_4] [i_4] = ((var_16 ? 2117747797 : ((((var_2 != (((var_17 ? (arr_3 [i_4] [i_4]) : (arr_11 [i_7] [i_5] [i_6] [i_7] [9] [5]))))))))));
                            var_23 = ((!(((0 ? 3870 : -56)))));
                        }
                    }
                }
                var_24 = ((((min((arr_17 [i_5 - 1] [i_5] [i_5 - 1]), (arr_10 [i_5 - 3] [i_5 - 3])))) ? ((min((arr_17 [i_5 + 1] [i_5] [i_5 + 1]), var_14))) : (~var_13)));
            }
        }
    }
    var_25 = ((var_14 ? (((~(var_16 < var_15)))) : var_5));
    var_26 = 1;
    #pragma endscop
}
