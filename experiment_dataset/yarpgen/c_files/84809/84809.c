/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (!1);
        var_13 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = ((3997607642 + 1) ? (((255 >= (arr_3 [i_1])))) : (arr_3 [i_1]));
        var_15 = 18;
        var_16 = ((((14 ? (arr_4 [i_1] [i_1]) : var_4)) - (arr_4 [i_1] [i_1])));
        var_17 = ((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_18 = ((arr_8 [i_2 + 1] [i_1]) || 15847095336165416365);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_19 = (((arr_6 [i_1]) ? var_1 : var_1));
                                var_20 = (((arr_10 [i_1] [i_3]) - ((((arr_10 [i_2] [1]) ? 204 : (arr_12 [4] [i_2] [i_1] [4]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 = (((arr_17 [i_7] [i_7] [i_3] [i_2 + 1] [i_2 - 1]) ? (arr_4 [i_2 + 1] [i_2]) : (arr_4 [i_2 + 1] [i_2])));
                                var_22 = 1;
                                var_23 = (((12977 & 1) || 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_24 -= (arr_25 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                                var_25 = arr_8 [i_2 - 2] [i_1];
                                var_26 = (((arr_25 [i_1] [i_8] [i_1] [i_8 - 1] [i_1] [i_8] [i_2 - 2]) != (arr_15 [i_8 - 1] [i_1] [i_2 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 21;i_10 += 1)
    {
        var_27 = (arr_27 [i_10]);

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_28 = ((((min((max(4000135551, -21879)), (-555395276 % -3887)))) || ((((((21878 ? 3951889099 : 1))) ? (arr_29 [i_10]) : (((~(arr_28 [i_11])))))))));
            var_29 = (arr_29 [i_11]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_30 = (((~var_7) ? ((((((arr_26 [i_10 + 1]) + 2147483647)) >> (((arr_30 [i_10]) + 17921))))) : ((-(arr_29 [i_10])))));
            var_31 = (var_9 < 0);
        }
    }
    var_32 *= ((((((-104 + 2147483647) << (((-9210129464316280013 + 9210129464316280019) - 6))))) ^ (~-6109585387710041146)));
    var_33 = var_9;
    var_34 -= var_1;
    var_35 = (min(var_35, ((max(var_0, var_2)))));
    #pragma endscop
}
