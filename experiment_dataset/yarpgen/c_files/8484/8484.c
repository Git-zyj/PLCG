/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_11 | ((min(108, 211)))))) ? ((((var_7 > 18446744073709551610) != (3 ^ var_0)))) : (((!(((16380 ? var_5 : 62))))))));
    var_18 = 3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (((!(arr_5 [i_0] [i_0] [9] [9]))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_20 = ((!(arr_11 [i_1] [0] [0] [4] [i_4] [i_2 - 1] [i_0])));
                            var_21 = ((var_1 ? (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [2] [i_2 + 2] [i_2 + 1]) : (arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2] [6] [i_2 + 2] [i_2 + 1])));
                            var_22 *= (((arr_3 [0] [i_2 + 1] [i_2]) == (arr_3 [i_0] [i_2 + 2] [14])));
                            var_23 = (arr_6 [i_1] [i_2 - 1] [i_2 + 2]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_24 |= (min(((max(16, var_13))), (arr_5 [1] [i_2 + 2] [1] [1])));
                            var_25 = (min(162, ((((arr_4 [i_2] [i_2] [i_2 - 1]) >= ((-(arr_11 [i_0] [i_0] [i_2] [i_2] [i_5] [i_2 + 1] [i_2 + 1]))))))));
                        }
                        var_26 = (max((arr_12 [i_0] [6] [i_1] [i_2 - 1] [14]), (arr_1 [11])));
                    }
                    arr_14 [i_0] [i_2 + 2] [i_1] [i_2 + 2] = ((+(((arr_10 [i_1] [i_1] [i_2 + 1] [7] [i_2 + 1]) ? (arr_10 [5] [i_2] [i_2 - 1] [5] [i_2 + 1]) : (arr_10 [i_1] [i_1] [i_2 + 1] [6] [i_2 - 1])))));
                    var_27 = (min(22072, ((((min((arr_1 [1]), var_14))) - 189))));
                }
            }
        }
    }
    var_28 += (((max(var_5, (min(var_8, var_14)))) - var_3));
    var_29 += ((((((min(18446744073709551615, var_16))))) - (min(((min(var_6, var_9))), (var_14 - 9)))));
    #pragma endscop
}
