/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));
    var_11 = ((((min((max(1, var_4)), (-154271115 + 1)))) ? var_4 : (min((var_5 | var_6), ((255 ? var_4 : -1))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (min((max(-33, -6475592807303126898)), -1024919169));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, -14507));
                    arr_9 [i_0] = (max((arr_6 [i_0] [i_0] [i_0] [i_1]), ((+((-17479 ? (arr_0 [i_0] [i_0]) : -1))))));
                    arr_10 [i_0] [i_0] [11] [i_2] = -3771;
                    arr_11 [4] [i_1] [4] [i_1] = ((((max(((0 >> (var_4 - 967631473))), (arr_4 [i_0] [i_0])))) ? (-1 * -100) : (max((max(var_3, (arr_3 [i_0] [i_0] [i_0]))), (arr_1 [i_2])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_13 &= ((max((max(var_3, var_5)), ((min(var_5, var_6))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_14 = ((~(((arr_16 [i_5 + 1] [i_5] [i_5 - 3] [i_5 - 1]) * (((!(arr_6 [i_4] [i_4] [i_3] [i_0]))))))));
                                arr_22 [i_0] [i_3] [i_3] [i_4] [i_5] [i_6] = arr_5 [i_0] [i_0] [17] [i_5];
                                arr_23 [i_5] [i_5] [i_0] [i_5] [i_6] [22] = (max((min(-1, var_5)), ((min(-3771, 117)))));
                            }
                        }
                    }
                }
            }
        }
        var_15 = ((((min(((var_0 ? 1073739776 : (arr_7 [i_0] [i_0]))), ((var_1 ? (arr_13 [i_0]) : (arr_13 [10])))))) ? (((min(100, -1073739776)) - (arr_7 [i_0] [i_0]))) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
