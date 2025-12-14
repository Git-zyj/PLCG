/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (i_0 % 2 == 0) ? ((max((((((min(18014398509481983, var_7))) ? (((arr_1 [5] [i_0]) << (var_8 - 193))) : 1))), (((arr_2 [i_0]) ? (((arr_0 [i_0]) ? -2616470698056091211 : var_9)) : (((((arr_0 [i_0]) < (arr_2 [i_0])))))))))) : ((max((((((min(18014398509481983, var_7))) ? (((((arr_1 [5] [i_0]) + 2147483647)) << (((var_8 - 193) - 2)))) : 1))), (((arr_2 [i_0]) ? (((arr_0 [i_0]) ? -2616470698056091211 : var_9)) : (((((arr_0 [i_0]) < (arr_2 [i_0]))))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_10 = (max((((~var_1) ? (~var_4) : (arr_6 [i_0 + 4] [i_1]))), ((max(0, ((((arr_0 [i_1]) > (arr_11 [i_0])))))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [i_1] = ((((((((arr_11 [i_0]) && (arr_2 [i_0]))) ? ((var_1 - (arr_10 [i_0]))) : ((((arr_6 [i_0] [i_1]) >= var_5)))))) ? (min(-551373238534261749, ((-551373238534261749 ? (arr_6 [i_0] [i_1]) : (arr_11 [i_0]))))) : ((min(62920, 1563491433)))));
                            arr_15 [i_0] [i_1] = min(-551373238534261749, ((((arr_9 [i_0] [i_0] [i_0] [i_3]) < ((min(0, 0)))))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] [i_3] = (((((var_9 ^ ((((var_5 + 2147483647) << (((var_5 + 679022190) - 20)))))))) ? ((1 ? (arr_12 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0 + 3]) : (arr_12 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]))) : var_5));
                            arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_3] [i_0] [i_0 - 1] = var_5;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [10] [i_3] [i_5] |= (~1);
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_7 ? (arr_10 [i_0]) : 1));
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((((arr_1 [i_0] [i_0]) <= 0)));
                    }
                }
            }
        }
    }
    var_11 = (((((min(var_9, 65535)))) == -1563491433));
    var_12 = (min(var_12, ((((((((var_1 & -1834390048) >= (-2147483647 - 1))))) < (min(16232639306549837536, 0)))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                arr_30 [i_6] [i_7] = ((~((((((var_5 ? var_3 : -217228431))) && 4)))));
                arr_31 [i_6] [9] [i_6] = 16232639306549837536;
                arr_32 [i_6] = ((~(((arr_6 [i_7] [i_7]) ? (arr_26 [i_6] [5]) : 0))));
            }
        }
    }
    #pragma endscop
}
