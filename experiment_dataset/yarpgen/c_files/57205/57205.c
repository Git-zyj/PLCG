/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((!0) || 0)) && -21746)))));
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((-((((var_2 ? 21739 : 1))))));
                arr_5 [i_1] = var_6;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_15 = ((((min(((min(1, var_4))), (((arr_1 [i_0]) ? (arr_4 [i_2]) : 527765581332480))))) ? (min((min((arr_6 [i_0] [i_0] [i_0] [15]), var_11)), (arr_4 [i_1 + 1]))) : ((((arr_7 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_1 + 1]))))));
                    var_16 *= 1;
                }
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (min((arr_7 [i_0] [i_3]), ((-21755 | (arr_2 [i_0] [i_0] [i_3])))));
                    arr_11 [i_0] [i_0] [i_3] = ((((((21741 != (arr_7 [i_0] [i_3]))))) > (min(2147483635, 22985))));
                    arr_12 [i_3] [i_1] [i_1] [i_0] = (((-(arr_3 [i_3 - 1]))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = 22985;
                }
                arr_14 [3] [i_1] = 1;
                var_17 = (min((min(10342702241639658785, 1)), 1));
            }
        }
    }
    var_18 = ((((min(-32764, (!1)))) ? ((min(-21746, 32746))) : (var_3 / var_3)));

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_19 = -20639;

        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] [i_4] [i_4] = (min((arr_19 [i_4] [i_4] [i_4]), ((((~-75) == var_1)))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_29 [i_4] [i_5] [i_5] = ((85 ? (arr_6 [i_5] [i_6] [i_5] [i_8]) : ((1 ? var_1 : (arr_25 [i_5])))));
                            var_20 = (((-20649 + 2147483647) << (((((1 != (arr_1 [i_5])))) - 1))));
                            var_21 = 66;
                            arr_30 [6] [i_7] [i_6] [i_6] [i_6] [i_5] [i_4] &= (((203054602588022081 > 42555) - (arr_26 [i_7] [i_6] [i_5] [i_4])));
                        }
                    }
                }
                arr_31 [i_4] [i_5] [2] [i_5] = ((!(arr_23 [i_6] [i_5] [i_4] [i_4])));
                arr_32 [i_4] [i_4] [i_4] [i_6] = (0 | 272837768);
            }
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            var_22 = (((~-203054602588022083) & (min(22985, -4304698588164475218))));

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                arr_37 [i_4] = (arr_1 [i_9]);
                var_23 = ((21311 ? (~-6) : (arr_25 [i_4])));
                var_24 = (max(var_24, ((min((((arr_36 [i_4] [i_4] [i_4] [i_4]) ? (arr_36 [i_4] [i_4] [i_10] [i_9]) : (arr_28 [i_4] [13] [i_9] [13] [16]))), ((-8 ? (~31) : (arr_16 [i_9]))))))));
            }
        }
    }
    #pragma endscop
}
