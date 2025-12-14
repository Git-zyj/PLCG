/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 *= (max(var_6, ((((-566834739 || (arr_0 [i_0] [i_0]))) ? ((((!(arr_1 [i_0] [i_0]))))) : (min(14960532696176908305, var_7))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (((max((min(1304368259, var_9)), (((arr_5 [i_0]) ^ (arr_5 [i_0]))))) - (420889787 && 12931232257957243258)));
            arr_7 [i_1] = (max((((!(arr_1 [i_0] [i_1])))), (max(((var_9 ? var_7 : var_9)), (max(284692482, -19831))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_4] [2] [1] [10] [i_3] [3] = -284692483;
                            var_11 = (max(var_11, (((0 ? -2514423745486691331 : 14960532696176908305)))));
                            var_12 = (arr_3 [i_1] [i_1] [i_2]);
                            var_13 = (-420889788 ? 1815306072 : 3792529068);
                            var_14 = (max(var_14, (((((((arr_11 [i_0] [i_4] [i_3] [i_3] [4]) ? 0 : (arr_11 [i_3] [i_3] [i_2] [i_1] [i_0])))) ? (var_4 | 14456) : (((!(arr_9 [i_1] [12])))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_0] = (((arr_5 [i_0]) ? (arr_5 [i_2]) : (arr_5 [i_2])));
                            var_15 = (!420889764);
                            arr_19 [i_0] |= ((!((((arr_17 [i_2] [i_1] [2]) ? 127 : (arr_1 [i_0] [i_0]))))));
                        }
                        var_16 += 112;
                        arr_20 [i_1] [i_2] [i_3] = (((((var_2 ? var_1 : 0))) ? var_3 : (arr_2 [i_0] [i_0])));
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            var_17 = ((((~245) ? ((max(var_5, (arr_12 [i_0] [i_6] [i_0] [i_0] [i_0] [i_6 - 3])))) : (arr_3 [i_0] [i_0] [i_0]))));
            var_18 ^= (((min(2239285098, 376924308)) < (((((var_5 ? 1815306072 : var_9))) ? (arr_9 [i_6 - 1] [i_6 + 2]) : ((var_1 ? (arr_22 [i_6]) : 3792529052))))));
        }
        arr_23 [9] [i_0] = ((((-((-(arr_5 [i_0]))))) + ((((max(502438247, (arr_13 [i_0] [13])))) ? (22288 - 14282) : (((arr_4 [i_0]) ? (arr_16 [5]) : 1))))));
    }
    var_19 = ((!((((((var_2 ? 14309 : 33546240))) ? var_1 : var_9)))));
    var_20 *= var_6;
    var_21 &= max((max((max(13762, 4080)), (!var_9))), var_3);
    #pragma endscop
}
