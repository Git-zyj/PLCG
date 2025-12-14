/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 -= (((arr_5 [4] [i_1] [i_2 + 1] [i_2 + 1]) > (~160)));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_13 = 16;
                        var_14 = 13459733624762348121;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_11 [i_0] [i_4] [i_4] [2] [i_4] [i_0] = ((((-316706533 + 2147483647) << (((((arr_6 [i_0] [i_0] [i_0] [1]) + 81)) - 17)))) + 13459733624762348121);
                        var_15 += (((((arr_8 [i_0] [i_1] [i_1] [i_2] [i_4]) ? 13459733624762348095 : var_9)) << ((((62368 ? (arr_4 [i_1] [i_1]) : (arr_0 [i_4] [1]))) - 2356926309074170404))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_16 [i_0] [i_1] = (((!28) ? 16343315871466474234 : (!var_5)));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] &= (((((var_6 ? var_2 : (arr_4 [i_0] [i_0])))) ? var_1 : ((~(arr_8 [9] [9] [i_6] [0] [1])))));
                        }
                        arr_18 [10] [i_1] [i_0] [i_5] = ((~1) > (arr_2 [i_0] [i_0]));
                    }
                    arr_19 [i_0] [i_1] [16] [i_2] = var_2;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_16 += 4987010448947203509;
                    arr_26 [i_8] &= (!(arr_8 [i_0] [i_7] [10] [i_8] [1]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_35 [i_11] [6] [i_11 + 2] [i_11] = ((((((((4987010448947203509 ? (arr_32 [i_9] [i_10] [i_11]) : 181))) ? (arr_27 [i_11 - 2] [i_11 - 1]) : ((max((arr_28 [7]), (arr_28 [i_9]))))))) ? (arr_34 [i_11 - 1] [i_11] [i_11 + 2] [i_11 + 1] [i_11 + 1]) : 920780959220072629));
                            arr_36 [i_9 + 1] [i_10] [i_11 - 1] [i_10] [i_11] = (-(~var_4));
                            var_17 += (arr_32 [i_10] [i_10] [i_12]);
                        }
                    }
                }
                var_18 += (arr_31 [6] [i_9]);
                arr_37 [1] [1] = (((arr_31 [i_9 - 2] [i_9 - 1]) ^ (arr_31 [13] [i_9 + 2])));
            }
        }
    }
    var_19 = (40252 > 1);
    var_20 = ((((((~28413) != 165)))) / (-22 * var_5));
    #pragma endscop
}
