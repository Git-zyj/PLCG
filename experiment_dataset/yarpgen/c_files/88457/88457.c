/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 = (((arr_1 [3]) ? (((var_11 ? 58165 : var_3))) : (arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_10 [i_0 + 2] [i_0] [i_2] [i_3] [i_4] = arr_0 [i_4];
                            var_13 = (max(var_13, ((((((var_11 ? 22497 : (arr_4 [i_1] [i_2] [i_1])))) ? var_5 : var_6)))));
                            var_14 ^= (((~var_9) ? (arr_8 [i_1] [i_1] [i_4] [i_1] [i_1 + 1] [i_4 + 3]) : var_8));
                            arr_11 [i_0] = (((arr_3 [i_0]) != (arr_3 [i_0])));
                        }
                        var_15 ^= (((~var_10) ? var_10 : var_9));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = (!var_9);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_16 = max(((((-22498 == (arr_14 [i_6]))))), ((((-22497 ? 15796 : 0)) >> (((max(var_6, 15796)) - 521651457)))));
                                var_17 ^= (((((43541 ? 1267397037 : (arr_17 [i_5 - 3])))) ? 15770 : ((18176 ? -15791 : -22492))));
                                arr_25 [i_5] [i_5] [i_9] [i_8] [i_8] = (min(((min(var_8, 21784))), -var_0));
                            }
                        }
                    }
                    var_18 ^= (min(((((max(var_10, var_2))) ? (arr_13 [i_5]) : (((arr_18 [i_5 - 1]) ? var_4 : 3856736343)))), ((((((arr_1 [i_5]) > var_6)) ? var_8 : ((min(var_11, -22492))))))));
                    var_19 ^= (((max(var_8, ((var_11 + (arr_7 [i_7] [i_6] [i_5]))))) > ((((min(var_10, (arr_20 [i_7])))) ? (arr_14 [i_5 - 2]) : 22497))));
                }
            }
        }
    }
    var_20 ^= (!var_8);

    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_21 = (max(-22507, (arr_0 [i_10])));
        var_22 = (((((var_9 | var_2) - ((-22492 ? var_8 : var_1)))) * (((var_3 & var_3) ? var_1 : (arr_1 [i_10])))));
    }
    var_23 = (max((((-17514 + 2147483647) << (var_0 - 4196506521))), ((var_10 ? var_5 : ((var_9 ? 33974 : var_11))))));
    #pragma endscop
}
