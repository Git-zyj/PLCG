/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-(arr_1 [i_0]));
        var_12 = (((((max(43695, (arr_2 [i_0]))))) % -2390747153687625057));
        arr_4 [i_0] = (-14 ? (arr_1 [i_0]) : ((max((arr_1 [i_0]), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = (max(231, ((~((min((arr_1 [i_1]), (arr_1 [i_0]))))))));
                    arr_12 [i_0] [i_1] [16] [i_2] = ((((min((arr_8 [i_0] [i_0] [i_0]), 0)))) ? ((~(790733768 + 96))) : (((-1 ? (arr_7 [i_2] [i_2 - 1] [i_2 - 2]) : (arr_7 [i_2] [i_2] [i_2 + 1])))));
                    var_13 = (max(((57323 % (arr_5 [i_0] [i_0] [i_0]))), (min((arr_7 [i_0] [3] [3]), 211658826))));
                    var_14 = (min(var_14, (((((150 == (8213 * 1))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_4] [i_2 + 1] [i_0] [i_4] [i_3] [i_3] = 1;
                                var_15 = (max((((1 < (arr_13 [i_3])))), (min((arr_13 [i_3]), 1632797273))));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_0] = ((!((((0 <= 64) ? var_7 : 8213)))));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        arr_23 [i_5] = (~1);
        arr_24 [i_5] = (arr_8 [i_5 + 1] [i_5 - 1] [i_5 + 1]);
    }
    var_16 = ((-((((max(0, 3))) ? (((max(1, 1)))) : ((var_11 ? 6664678061472792288 : 6664678061472792306))))));
    var_17 = (min(((((min(4193686598, 33))) ? (var_9 + -5) : (-2071507700 < 117))), ((min((var_8 >= var_2), 14)))));
    var_18 = var_6;
    var_19 -= (((var_11 && 11436) ? ((-(var_0 / 448252318))) : ((~(11436 & 127)))));
    #pragma endscop
}
