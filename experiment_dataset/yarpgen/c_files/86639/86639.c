/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((var_5 ? var_0 : 70368710623232));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_11 = (arr_6 [i_2 - 3]);
                        var_12 = (arr_8 [i_0] [i_0] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_13 = (min(var_13, (max(((min((arr_7 [i_1] [i_1] [i_2 - 3]), (arr_7 [i_0] [i_0] [i_2 - 2])))), 2147483647))));
                        arr_13 [i_2] [i_2] = (min(((min((arr_0 [i_2 - 2]), (arr_5 [i_2 + 1])))), (((arr_0 [i_2 - 2]) ? 1 : (arr_5 [i_2 - 1])))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = 32512;
                        var_14 = (arr_7 [i_2 - 2] [i_1] [i_2]);
                    }
                    var_15 = max((arr_9 [i_2 - 3] [i_2 - 1]), (((-32765 ? 24 : (arr_7 [i_0] [i_0] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_5] [i_0] [i_6] = arr_18 [i_5];
                                var_16 ^= (((((arr_9 [i_2 + 1] [i_2 - 3]) ? 9007190664806400 : (arr_9 [i_2 - 2] [i_2 - 1])))) ? -7700061169357262931 : (((arr_9 [i_2 - 1] [i_2 - 1]) ? -4757832106403472888 : (arr_11 [i_2] [i_2 - 3] [i_2] [i_2]))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_2 - 2] = (((arr_18 [i_0]) ? (max(0, (arr_6 [i_1]))) : (arr_7 [19] [i_1] [i_0])));
                }
            }
        }
        var_17 = (max(((-1 ? 127 : 992)), (arr_15 [i_0] [1] [1])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        arr_29 [i_9] [i_0] [i_9] [i_9] = (arr_5 [i_7]);
                        arr_30 [i_0] [i_0] [i_9] [i_9] [i_9] = (max((arr_23 [i_9]), (arr_10 [i_0] [i_7])));
                    }
                }
            }
        }
        arr_31 [i_0] [i_0] = (arr_2 [i_0] [i_0] [i_0]);
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_18 ^= (max((((-6819642917896299437 ? (arr_15 [i_10] [i_10] [i_10]) : 4))), (min(4294967295, (arr_4 [i_10])))));
        var_19 = ((6875048090275021881 ? ((max(1, (arr_26 [i_10] [i_10])))) : (min(3758096384, 1))));
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        arr_36 [i_11] [i_11] = 26438;
        arr_37 [i_11] = (min(((1 ? 32 : (-9223372036854775807 - 1))), 66584576));
        var_20 = (max((max((arr_15 [i_11] [i_11] [i_11]), 2066663635)), (arr_33 [2])));
        var_21 = 6819642917896299438;
        var_22 = (arr_16 [i_11] [i_11] [i_11] [i_11]);
    }
    var_23 = var_5;
    #pragma endscop
}
