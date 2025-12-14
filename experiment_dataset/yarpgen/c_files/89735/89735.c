/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = ((((arr_5 [i_0] [i_2]) ? -92 : (arr_5 [i_0] [5]))));
                    arr_6 [12] [i_1] [i_1] [i_0] = var_5;

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_11 = ((((min(90, var_4))) ? (var_2 - 1827281133) : var_0));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            arr_12 [1] [i_1] [i_2] [i_0] [i_4] = ((-61 ? var_9 : ((~(arr_0 [i_3 + 3] [i_3 + 2])))));
                            var_12 = var_7;
                            arr_13 [i_2] [11] [i_4] = (arr_7 [i_3 - 1] [i_4 - 2] [i_4] [i_4] [i_4] [i_4 - 2]);
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_13 -= var_0;
                        var_14 = ((var_7 | ((16973801129949744877 ? var_4 : var_0))));
                        var_15 = (~var_7);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        arr_19 [11] [i_2] [10] [i_1] [i_0] [1] = (((((arr_8 [i_0]) ? var_8 : 33554430)) < (((1827281129 ? (arr_4 [12] [i_1] [1]) : (arr_15 [i_0] [i_0] [i_0]))))));
                        var_16 = ((-(-1 + 0)));
                        arr_20 [i_6] [i_1] [i_2] [i_6 + 2] = (arr_8 [4]);
                    }
                }
            }
        }
    }
    var_17 = ((((0 < (((max(var_2, -61))))))) | (-1 || var_2));
    #pragma endscop
}
