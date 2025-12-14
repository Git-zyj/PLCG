/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 | (max(11013, var_11))));
    var_13 = (((((var_8 >> ((((6549538613422647850 ? -73 : 0)) + 80))))) ? ((min((var_4 < var_5), (max(var_2, var_6))))) : (((max(var_1, 37954)) & (var_3 > 50301)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = var_3;

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [3] [i_1] [i_1] [i_1] = (((arr_5 [i_1 - 4] [i_1 - 3]) ? 27584 : var_6));
                        arr_12 [i_0] [i_1 - 4] [i_2] [i_0] [i_1] [1] = 37953;
                        arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] = ((122 ? (((arr_3 [i_3]) - var_2)) : (122 * var_5)));
                        var_15 = (((~27578) ? (((-127 - 1) | 27582)) : (arr_10 [i_0])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_21 [i_1] [12] [i_4] [i_1] = (((((arr_4 [i_5]) ? 37962 : (arr_20 [i_5] [i_4] [i_1] [i_0] [i_0])))) ? (var_8 <= var_8) : var_6);
                        arr_22 [i_0] [i_1] [i_4] [i_4] = (!9223372036854775798);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_27 [i_1] [i_6] [13] [14] [i_1] = var_1;
                        arr_28 [i_0] [i_1] [i_6] [i_7] [i_6] = (((arr_16 [i_7] [i_6]) ? (((arr_20 [i_0] [6] [i_1] [i_0] [i_0]) + 37962)) : (8191 + 0)));
                    }
                }
            }
            var_16 ^= ((arr_9 [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 2] [i_1] [i_1 - 3]) ? (arr_9 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 3]) : 4294967286);
        }
        arr_29 [i_0] = (((arr_4 [i_0]) == (arr_6 [i_0])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_36 [i_0] [i_8] [i_8] = (27582 ? -107 : (arr_33 [i_8]));
                    var_17 = var_2;
                    var_18 = (i_8 % 2 == 0) ? (((((((arr_16 [i_0] [i_0]) > 11))) >> ((((229 ? (arr_23 [i_0] [i_8] [i_9] [i_0]) : var_6)) - 379880658240052146))))) : (((((((arr_16 [i_0] [i_0]) > 11))) >> ((((((229 ? (arr_23 [i_0] [i_8] [i_9] [i_0]) : var_6)) - 379880658240052146)) + 3856227843246461971)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    arr_43 [i_0] [i_10] [i_11] = (((arr_3 [i_0]) ? (((237 ? var_10 : (arr_42 [i_0] [i_10] [i_11])))) : (arr_23 [i_0] [i_10] [12] [i_11])));
                    arr_44 [i_0] [i_11] = (((arr_30 [i_0] [i_10]) ? (((~(arr_16 [i_10] [i_0])))) : ((65534 >> (var_4 + 104)))));
                    arr_45 [i_10] = (arr_41 [i_11] [i_10] [i_11]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 4; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            {
                var_19 = 3406727464223493454;
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            arr_54 [i_12] [i_12] [i_15] [i_14] [i_13] = (arr_52 [i_12] [i_13] [3] [i_13]);
                            arr_55 [i_12 - 1] [i_12 - 1] [i_14] = 3406727464223493447;
                            var_20 = ((!(((((min(27581, 27601))) ? ((0 ? (arr_51 [i_12] [i_13] [i_12]) : 29331)) : (((var_6 >> (((arr_50 [i_14] [i_14]) - 8926))))))))));
                            var_21 = (arr_53 [1] [i_13] [1] [i_13] [i_13] [i_13]);
                        }
                    }
                }
                var_22 = (max(var_22, (arr_50 [i_13] [8])));
            }
        }
    }
    var_23 = ((((13920529004700523966 ? ((var_2 ? var_1 : var_6)) : (!44))) - (((min(23535, var_10))))));
    #pragma endscop
}
