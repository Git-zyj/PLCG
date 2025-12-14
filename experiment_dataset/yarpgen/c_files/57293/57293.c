/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (min(0, (-32767 - 1)));
        arr_3 [i_0] [i_0] |= ((0 ? (~32749) : -5369));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (32747 + 1)));
        arr_6 [i_1] = arr_5 [i_1];
        arr_7 [i_1] = 32738;
        var_19 = ((arr_4 [i_1 - 1]) && (arr_4 [i_1 - 1]));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_20 = (min(1, ((1 ? 0 : 1))));
            var_21 -= (arr_8 [i_3]);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_23 [i_4] [i_6] [i_4] [i_4] [i_4] = (((((!(arr_15 [i_2] [i_2] [i_2] [i_2])))) * var_10));
                            arr_24 [i_2] [1] [i_5] [i_5] [i_7] [i_7] |= ((((min((min(32767, 1)), var_8))) || ((!((1 || (arr_17 [i_2] [i_2] [i_5] [i_6])))))));
                            var_22 = ((((((arr_17 [i_2 + 2] [i_2 - 1] [i_7 + 1] [i_7 - 2]) >> 1))) ? -22625 : (arr_17 [i_2 - 1] [i_2 + 1] [i_7 - 2] [i_7 - 1])));
                            var_23 = (max(var_23, 1));
                        }
                    }
                }
            }
            var_24 = (max(var_24, (((var_9 ? (var_10 + 1) : ((min((arr_22 [0]), (arr_12 [i_2] [i_2])))))))));
            arr_25 [i_2] [i_4] = (((arr_19 [i_4] [i_2] [1]) << (1 >= 0)));
            arr_26 [i_4] [i_4] = ((15636 ? (arr_20 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2]) : ((min((arr_4 [i_2 + 2]), 1)))));
        }
        var_25 ^= min(7936, var_5);
        var_26 = (max(var_26, ((((arr_15 [i_2] [i_2] [i_2 - 1] [i_2]) + 24163)))));
    }
    var_27 = var_11;
    var_28 = var_10;
    #pragma endscop
}
