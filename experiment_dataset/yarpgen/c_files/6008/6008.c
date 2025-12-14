/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = ((((max(18064396488760164979, ((((arr_7 [i_3] [i_2] [i_1]) ? var_9 : 174)))))) ? (arr_7 [8] [i_1] [i_3 - 1]) : -1));
                            var_21 = (((var_17 ? (arr_9 [i_3 + 1] [i_2 - 1] [i_0]) : (arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_2 - 1]))));
                            var_22 -= (((((+(min((arr_7 [i_3] [i_1] [1]), (arr_3 [i_2])))))) ? ((((max(157, var_1))) ? (var_4 * 157) : (((((arr_1 [i_3]) <= var_10)))))) : 102));
                            arr_13 [i_0] [i_0] [17] [i_0] [i_3] [i_1] |= (max((((arr_11 [i_0] [i_1] [i_2 + 3] [i_3 + 1]) ? (~9255555969349309118) : (arr_3 [i_0]))), (((max(var_2, (arr_0 [i_0] [i_0])))))));
                        }
                    }
                }
                var_23 = (((!var_6) | (((((-(arr_3 [i_0])))) / (max((arr_10 [19] [i_1] [i_1] [i_1]), var_12))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 = ((((arr_9 [i_5] [i_4] [i_1]) ? 103 : var_5)));
                                var_25 = ((!((max((max(var_15, var_2)), var_2)))));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_0] [i_0] = (((((-(arr_12 [i_0] [i_1] [i_1] [i_1])))) ? ((((arr_12 [i_0] [i_1] [12] [i_1]) && var_13))) : (((arr_12 [i_0] [i_1] [i_0] [2]) ? (arr_12 [i_0] [i_1] [i_0] [i_0]) : (arr_12 [i_0] [i_1] [2] [i_0])))));
                var_26 = (min(13, (-1 != var_5)));
            }
        }
    }
    var_27 = 68;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_28 = (((((var_12 ? ((var_8 ? var_4 : 2035930773)) : (arr_27 [i_8] [i_9])))) ? (min(((min((arr_23 [i_7]), -9547))), 187)) : (arr_29 [i_8 - 1] [i_8 - 1])));

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_29 = ((((-1 && (arr_36 [i_7] [i_7] [i_8] [i_9] [i_10]))) ? (((var_9 && (arr_36 [i_7] [i_7] [i_7] [i_7] [i_7])))) : 14678));
                        var_30 = ((var_10 ? (~var_1) : 65535));
                        arr_38 [i_7] = ((~(max((arr_36 [i_8 - 2] [i_8 + 1] [i_8] [i_8] [19]), var_19))));
                    }
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        var_31 = (arr_24 [i_7] [i_8]);
                        arr_41 [i_7] [i_8 - 2] [i_9] |= (arr_34 [i_7]);
                        arr_42 [6] = (arr_29 [i_8 - 2] [i_11]);
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_32 = (min(var_32, (arr_45 [i_12] [i_7] [i_8] [i_8] [i_7] [i_7])));
                        arr_47 [i_12] [i_9] [i_8] [i_8] [i_8 - 2] [i_7] = (((((((arr_39 [22] [22] [i_7] [i_7]) ? (arr_27 [i_7] [i_7]) : var_18))) ? 102 : ((var_7 ? var_12 : (arr_37 [i_7] [5] [i_7] [i_12] [i_9] [i_8]))))));
                        arr_48 [i_7] [i_12] = (max((max(-var_1, var_3)), (arr_31 [5] [5])));
                    }
                }
            }
        }
    }
    var_33 &= ((var_13 / (max(((var_16 ? var_3 : var_7)), var_11))));
    #pragma endscop
}
