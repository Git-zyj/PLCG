/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((+((max((arr_4 [i_0] [i_1] [i_0]), (max(53638, (arr_3 [0]))))))));
                arr_6 [i_0] = (arr_0 [i_0]);
                arr_7 [i_0] [2] = (~1982006979);
                arr_8 [i_0] [i_0] [i_0] = (min(((var_6 - (max(0, (arr_1 [i_1]))))), (-var_1 - 2709384240)));
            }
        }
    }

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_10 = (max(var_10, var_8));
        var_11 = (arr_2 [i_2 - 1]);
        var_12 = (min(var_12, ((min(-var_5, (min(((-(arr_2 [12]))), ((((arr_9 [i_2]) || var_2))))))))));
        arr_13 [i_2 + 1] = var_7;
        var_13 = (max(var_13, (((+(((arr_12 [i_2 + 1] [i_2 + 1]) ^ (~var_5))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_14 = 41;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_15 = ((-(((!(arr_14 [i_3] [i_3]))))));
                        arr_23 [i_4] [i_4] [i_4] [i_4] = ((~(arr_20 [10] [i_4] [i_4] [i_4])));
                        var_16 = (((arr_22 [1] [1] [i_4] [13] [4]) ? (((arr_2 [i_3]) % (arr_15 [i_3]))) : (var_4 ^ 2277)));
                    }
                }
            }
        }
        arr_24 [i_3] [i_3] = (((arr_3 [i_3]) ? (arr_17 [i_3]) : (arr_3 [i_3])));
        var_17 = (min(var_17, (((-4242329571523045391 - (arr_22 [i_3] [i_3] [1] [i_3] [i_3]))))));
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        arr_27 [i_7] = (((((~(min(-124627148, (arr_25 [i_7])))))) ? (arr_26 [i_7 + 1] [i_7]) : (~-122)));
        arr_28 [i_7] = -4544634816465220762;
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_18 = ((-53611 > (((!(arr_25 [i_7 + 2]))))));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_19 = (max(((var_6 ? (0 - 0) : (max(727531947, 0)))), ((((arr_30 [i_7]) != (arr_29 [i_7 - 1] [i_7 + 1] [i_8 - 1]))))));
                        var_20 = (max(var_20, (((+(max((arr_31 [i_7]), (arr_35 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]))))))));
                        arr_38 [i_7] [i_10] = ((13 ? -1 : 6409807357788428199));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_41 [i_7] [i_7] [i_9] [i_11] [i_11] [i_11] = var_4;
                        var_21 = 15;
                    }
                    var_22 = (((arr_35 [i_7 + 2] [i_8 - 1] [i_8 - 1] [i_9] [i_9]) ? (arr_35 [i_7 - 1] [i_8 - 1] [i_8 + 1] [i_9] [i_9]) : (arr_35 [i_7 + 1] [i_8 - 1] [i_8 - 1] [2] [i_8])));
                }
            }
        }
        var_23 = ((~(((((((arr_30 [i_7]) > (arr_37 [i_7] [i_7] [6] [i_7 + 2]))))) ^ 39766))));
    }
    var_24 = var_2;
    #pragma endscop
}
