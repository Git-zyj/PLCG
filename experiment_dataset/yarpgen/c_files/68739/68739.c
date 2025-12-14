/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (((((arr_1 [3]) && 3019733555355738734))));
        arr_2 [i_0] = (arr_1 [8]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_1] = ((min((((5620 ? var_13 : var_8))), (min((arr_0 [i_0] [i_0]), var_11)))));
                        var_17 = (max((~18), ((min((arr_4 [i_3] [i_0]), (arr_4 [i_0] [i_0]))))));
                        arr_10 [i_3] = -5620;
                        arr_11 [4] [i_2] [i_3] [i_3] [i_0] [i_0] = ((((((max(1, 23)))) - (~2899958149211479122))));
                    }
                }
            }
            arr_12 [i_0] [i_1] = (!var_7);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_18 = (((((((var_11 ? var_8 : 32767))) ? -97699268 : (75 / var_6))) / (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (-125 + 125)))));
                        arr_18 [12] [i_1] [i_4] [i_5] = ((+(((arr_17 [i_0] [i_1] [1]) ? (((var_2 + 2147483647) << 0)) : (((arr_6 [i_5] [i_4] [i_0]) / 1))))));
                        arr_19 [i_1] [i_4] = ((max(2147483647, (arr_15 [i_4]))));
                        var_19 = (~0);
                    }
                }
            }

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_20 = 1;
                var_21 = var_0;
                arr_23 [i_0] [i_1] [i_6] = -var_5;
                arr_24 [i_1] [i_1] [7] = ((((~(arr_0 [i_1] [i_1])))));
                arr_25 [2] [i_6] [i_6] = min(-731687523, (127 && 1));
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_29 [i_7] [13] = (~0);
            arr_30 [i_0] [12] [12] = ((((max(2073021876, 175))) ? (!5616) : (arr_14 [i_7] [i_0])));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_35 [i_8] [i_8] = ((-(var_11 < var_6)));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_43 [i_0] [i_8] [i_9] [i_8] [i_11] = -29;
                            arr_44 [i_0] [i_8] [i_9] [i_8] [i_11] = ((((((((4294967295 ? 1 : 0)) == (1 - var_6))))) > -12386823746375112875));
                            var_22 = (arr_16 [i_0] [i_0] [i_9] [i_10] [i_11]);
                        }
                    }
                }
            }
            var_23 = ((34 ? (arr_13 [i_0] [i_0] [i_8] [i_8]) : var_13));
        }
        arr_45 [i_0] = ((((((arr_16 [i_0] [i_0] [1] [i_0] [i_0]) ? (arr_16 [5] [i_0] [5] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 23 : ((var_5 ? var_12 : var_12))));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_48 [i_12] = ((!(((~(arr_47 [i_12]))))));
        var_24 = ((1 ? ((~(((arr_46 [i_12]) / var_5)))) : ((max((min((arr_46 [1]), var_7)), var_1)))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    {
                        var_25 = 0;
                        arr_57 [i_15] [i_13] [i_15] = 5610;
                    }
                }
            }
        }
    }
    #pragma endscop
}
