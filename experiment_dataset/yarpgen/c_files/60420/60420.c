/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = 8884428572006422515;
                            arr_8 [8] [i_2] [i_2] [i_2] |= (max(((((-1184 || var_8) || -1))), ((~((var_4 - (arr_1 [i_0])))))));
                            arr_9 [i_1] [i_2] [i_1] [i_0] [i_0] [i_1] = ((~(max(var_0, ((-(arr_2 [i_0] [i_0] [i_0])))))));
                            var_12 = (arr_0 [i_3]);
                        }
                    }
                }
                arr_10 [i_1] [i_1] = ((-(min(-10673, (arr_3 [i_1 + 1] [i_1] [i_0])))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_13 = arr_12 [7] [7] [i_1];
                    var_14 = (((-127 - 1) ? 110 : 127));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_15 = (((-11 >= -64) ? ((max(var_3, var_8))) : ((((((arr_4 [i_0] [i_1] [i_5 + 2] [3]) == (arr_6 [i_0] [i_1] [i_1] [6] [i_6])))) >> (!47346)))));
                                var_16 *= (arr_4 [i_0] [10] [i_5] [i_6]);
                                arr_19 [i_0] [i_0] [i_4] [i_5] [i_1] = ((~(((!(((1 ? 8589934591 : -64))))))));
                            }
                        }
                    }
                    arr_20 [i_1] [i_0] [i_1] = (((arr_4 [i_0] [i_1] [i_0] [i_4]) && var_5));
                    var_17 += (max((max((arr_4 [i_0] [10] [i_4] [i_0]), (arr_4 [i_4] [4] [i_4] [i_4]))), (!var_9)));
                }
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_18 = (((arr_6 [i_0] [i_0] [i_1] [i_1] [i_7 - 1]) <= ((-3459 ? (arr_6 [i_0] [i_1] [i_1] [i_8] [i_7 - 1]) : 64))));
                        var_19 = ((((((-127 - 1) % 1))) ? (arr_16 [i_0] [i_0] [i_7] [i_8]) : (((!(((var_5 | (arr_0 [4])))))))));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_20 = ((-(((var_3 > (arr_1 [i_7 - 2]))))));
                            var_21 = ((~((max((arr_24 [i_1] [i_1 - 2] [i_1 - 1] [i_1]), (arr_24 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 1]))))));
                        }
                    }
                    var_22 -= (max((-22939 * 1), ((((var_1 > (arr_12 [i_0] [i_0] [10]))) ? (((arr_1 [i_0]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) : 0)) : -1))));
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_23 ^= var_8;
                    var_24 ^= 9056208296910157705;
                    var_25 = (min(var_25, ((min(var_3, ((~(arr_27 [i_0] [0] [1] [6] [i_10]))))))));
                }
                var_26 = 132;
            }
        }
    }
    var_27 = var_2;
    var_28 = (((((1 * (!var_6)))) == var_8));
    #pragma endscop
}
