/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(-8679929852905318487, ((max(((8679929852905318487 ? var_15 : var_4)), (var_11 || var_13))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_2 [i_0] = var_16;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_19 = (max(var_19, (min((arr_1 [i_1 + 1]), ((-(arr_1 [i_1 - 1])))))));
        arr_6 [i_1] = (arr_4 [i_1]);
        var_20 = (((arr_1 [i_1 + 1]) ? (arr_5 [i_1] [i_1]) : (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_21 -= (((arr_5 [i_3] [i_4]) ? 9223372036854775807 : (arr_5 [i_2] [i_2])));
                    var_22 ^= var_3;
                    var_23 -= (((((arr_12 [i_5] [5] [i_3]) + 2147483647)) >> (((((arr_4 [i_5]) ^ var_12)) - 241990784784356611))));
                    var_24 = (max(var_24, ((((arr_4 [i_5]) && (((var_15 & (arr_10 [i_2] [7])))))))));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_25 = (max(var_25, ((8679929852905318487 ? var_5 : (((var_11 && (arr_16 [i_2] [i_2] [i_2] [i_4]))))))));
                    arr_19 [i_6] [i_3] [i_2] = (((((~(arr_5 [i_2] [i_4])))) ? (arr_18 [i_2] [i_2] [i_2] [i_2]) : ((((arr_10 [i_4] [i_2]) / (arr_7 [7] [i_6]))))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_22 [i_3] [i_4] = (((arr_5 [i_2] [i_4]) || (arr_11 [i_2])));
                    var_26 = (arr_8 [i_2] [i_3]);
                    var_27 = (((((var_11 / (arr_8 [i_3] [i_3]))) + 2147483647)) >> (((arr_17 [i_3] [i_3 - 1] [i_3] [i_3]) + 2586650411480665601)));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_30 [i_9] [10] [i_4] [i_3] [i_2] = (((arr_24 [i_3 - 1]) / (arr_24 [i_3 - 1])));
                            var_28 = ((((((arr_5 [i_8] [i_8]) >> (((arr_5 [i_4] [i_4]) - 5725454066284530661))))) ? (!var_13) : (((arr_11 [i_3 + 1]) | 3354824655247035359))));
                            var_29 -= (((arr_5 [i_2] [i_3]) < var_12));
                        }
                    }
                }
                var_30 = (min(var_30, (((((arr_12 [i_4] [i_3] [i_2]) ? (arr_5 [i_3] [i_3]) : (arr_26 [i_2] [i_2] [i_2] [i_3] [i_4])))))));
                var_31 = (min(var_31, ((((arr_20 [i_3 - 1] [i_3] [i_3 - 1]) || (arr_15 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_2]))))));
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        var_32 |= ((8679929852905318487 / ((8679929852905318478 & (arr_33 [i_2] [i_10] [i_11])))));
                        arr_36 [i_2] [i_2] [i_10] [i_11] = ((((((arr_4 [i_10]) ? (arr_9 [i_3] [i_3] [i_3]) : (arr_11 [i_10])))) ? (((arr_32 [i_2] [i_11]) ? var_6 : var_3)) : (arr_33 [i_2] [i_2] [i_3 + 1])));
                    }
                }
            }
            var_33 ^= ((((-(arr_13 [i_3 + 1] [i_2] [i_2])))) ? (arr_5 [i_3 - 1] [i_2]) : (arr_18 [i_3 + 1] [i_3 + 1] [i_3 + 1] [8]));
        }
        var_34 -= (((max(((var_16 ? -25581 : (arr_20 [i_2] [i_2] [1]))), (((arr_28 [i_2] [i_2] [i_2]) % (arr_12 [i_2] [i_2] [i_2]))))) * (min((((arr_14 [i_2] [i_2] [i_2] [i_2]) ? 32767 : (arr_14 [i_2] [8] [i_2] [8]))), ((((arr_33 [i_2] [i_2] [i_2]) && -357087379)))))));
    }
    #pragma endscop
}
