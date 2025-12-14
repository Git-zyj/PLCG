/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_14 ? var_11 : var_7)), ((((~-1) ? var_9 : var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (arr_2 [i_0] [i_0] [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_6 [i_1] [i_2] = (((arr_0 [i_1 + 4]) ? (arr_3 [i_1] [i_1] [i_2]) : -124));
                    var_17 = (max(var_17, 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (-13633 + var_10);
                                var_19 = (min(var_19, ((10 ? (arr_2 [i_1 + 1] [i_3] [i_4]) : ((245 ? var_8 : 124))))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_1] = (((((arr_0 [i_0]) ? 32704 : 32844)) + (arr_1 [i_0 - 1] [i_0 - 2])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_20 = (((arr_15 [i_1] [i_1]) / var_6));
                    arr_17 [i_1] = 13649;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_21 = (arr_18 [i_0] [11] [i_0] [i_7]);
                            var_22 = var_1;
                            arr_23 [i_0] [i_1] = min((arr_10 [i_0] [i_0] [i_6] [i_1] [i_0]), ((((~(arr_8 [i_1] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_37 [i_8] [i_9] [i_8] [i_9] = var_11;
                            arr_38 [i_8] = (min((max(var_11, 11684066309263390060)), (~17670944300139689894)));
                        }
                    }
                }
                var_23 = ((var_0 && ((((arr_15 [i_8] [i_8]) ? -1278705188 : ((36714 ? 246 : -1449022605)))))));
            }
        }
    }
    #pragma endscop
}
