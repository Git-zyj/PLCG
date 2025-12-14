/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((-2389 ? 2336727837788470258 : 15970248697727274707)))));
                    var_11 = (((-1228083324 ? 3342702347663894263 : 1)));
                    var_12 = ((min((arr_6 [i_1] [i_2 - 1] [i_2 + 2] [i_1]), (arr_5 [i_2] [i_2 - 1] [i_2 + 2] [i_2 - 1]))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_13 = (((((~(arr_1 [i_3 + 2])))) ? ((max(((22855 ? 4294967295 : 4294967295)), 1))) : (min((((4294967295 ? 32746 : -12488))), -1))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            var_14 = (((((((arr_7 [i_3]) ? var_1 : (arr_11 [i_3] [i_4] [i_5])))) ? 16893183546796427683 : -var_0)));
                            var_15 = (min((((15104041726045657353 ? 4294967295 : -3137631964033543877))), ((min(1, (~1))))));
                            var_16 = (0 <= (((arr_2 [i_3] [i_4]) ? (((min(-29966, (arr_4 [i_3]))))) : 579964648283800074)));
                            var_17 = -7544990889997308162;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_18 = 9903;
                            var_19 = (arr_19 [i_3] [i_4] [i_5] [i_6] [2] [i_8]);
                            var_20 &= ((-61 ? 6 : 113));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_21 = var_8;
                            var_22 = ((-(arr_17 [i_3 + 1] [i_6 - 1])));
                            var_23 = (min(var_23, var_4));
                        }
                        var_24 = -104;
                        var_25 &= ((~(((arr_8 [i_3]) ? (arr_13 [i_6 - 1] [i_5] [i_4] [i_3 + 2]) : ((-(arr_22 [i_6] [i_6] [i_6] [i_5] [i_4] [i_3])))))));
                        var_26 = (min(var_26, (((!(((arr_19 [i_3] [i_6] [i_5] [i_6] [i_4] [i_6]) || ((!(arr_0 [i_6]))))))))));
                    }
                }
            }
        }
    }
    var_27 = (((1 ? var_9 : (var_0 && var_3))));
    #pragma endscop
}
