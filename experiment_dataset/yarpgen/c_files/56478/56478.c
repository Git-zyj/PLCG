/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((arr_2 [i_0]) == (arr_1 [i_0] [i_0]))) ? (~0) : (((arr_4 [i_0] [i_1] [i_1]) ? 0 : var_2))));
                arr_6 [i_0] [i_1] = (((((arr_0 [i_0] [i_0]) ? 3044488910 : (((((arr_3 [i_1] [i_1]) >= var_17))))))) ? ((-1 ? ((50591 ? -1 : (arr_2 [i_0]))) : ((var_17 ? (arr_3 [i_0] [18]) : (arr_2 [7]))))) : (((max((arr_4 [i_0] [8] [8]), (arr_0 [i_1] [i_0]))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = 0;

                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_3 + 1] = (max((max((arr_0 [i_1] [i_2]), (min(var_4, -697)))), (arr_0 [i_0] [8])));
                        arr_13 [i_0] [i_0] = ((arr_2 [i_2]) % var_7);
                        arr_14 [i_0] [i_1] [i_2] [i_2] = var_7;
                        arr_15 [i_1] [i_3] = (((((~((((arr_8 [i_1] [i_2] [i_3]) || 3591948107682754608)))))) ? var_2 : 17375419047165761834));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_4] = (((arr_4 [i_0] [i_1] [i_4]) & (((arr_1 [i_0] [i_0]) ? (arr_0 [i_2] [i_2]) : var_3))));
                        arr_20 [i_0] [i_2] [i_1] [i_0] = (((arr_8 [i_0] [i_0] [i_0]) ? 0 : 1250478386));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_19 = (((((7844931239325019156 ? var_18 : var_6)) >= (1 < var_15))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [18] [i_0] [18] = (((max((arr_4 [i_0] [i_1] [i_1]), ((0 ? 17594 : (arr_24 [i_0] [i_1] [i_0] [1] [i_6]))))) >> var_0));
                                arr_27 [i_0] [0] [i_2] [i_5] [i_2] [i_6] = (var_11 || 65535);
                                var_20 &= (((((((arr_16 [i_0] [i_1] [i_2] [i_5] [i_2] [i_2]) && 0)) || ((1 || (arr_18 [i_6] [i_6]))))) ? (((((arr_2 [i_0]) + var_7)))) : 1));
                            }
                        }
                    }
                }
                var_21 = max(((((max((arr_17 [i_0] [i_1] [i_0]), (arr_17 [i_0] [7] [7])))) & (((arr_2 [3]) % (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))))), ((((arr_17 [i_0] [i_1] [i_1]) <= (arr_17 [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_22 = (((arr_1 [i_1] [i_8]) ^ (((((-(arr_17 [i_0] [i_1] [i_0]))) % ((~(arr_30 [i_0] [i_0] [i_8]))))))));
                            arr_34 [i_1] = 1;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                arr_40 [12] [i_9] [i_10] = 1250478386;
                arr_41 [i_9] = 14854795966026797007;
            }
        }
    }
    #pragma endscop
}
