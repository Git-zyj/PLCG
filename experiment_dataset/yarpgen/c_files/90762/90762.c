/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (((((arr_2 [i_0 + 1] [14]) ? (arr_3 [i_0] [i_1]) : (max(var_13, var_2)))) != 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = -116493676;
                            var_18 = (max(var_18, ((var_13 | (65535 != 1)))));
                        }
                    }
                }
                var_19 = ((max((max(var_8, var_3)), (arr_1 [i_0]))) / (var_5 * 1));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((((((max((arr_0 [i_0] [i_0 + 1]), var_6))) || var_14))) > (!var_11))))));
                            var_21 ^= 2701;
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        var_22 = (((arr_18 [i_6]) ? ((~(max(var_15, (arr_18 [i_6]))))) : (((~(~4294967295))))));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                {
                    arr_24 [i_6 + 1] [i_7] [i_7] = ((((((var_12 / var_14) ^ var_7))) ? (~-1) : var_1));
                    arr_25 [8] [8] [8] = ((+(((-2147483647 - 1) ? 0 : 3667732569))));
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_23 = ((!(arr_9 [i_6 + 2] [i_10] [i_10 + 1] [i_10 + 1])));
                                var_24 = (min(var_24, 0));
                                var_25 = (((((((!(arr_28 [i_6] [i_7] [i_8] [i_9] [i_8] [i_10 + 1]))) ? ((-5336381700052240158 ? 1 : 0)) : (arr_2 [i_9] [i_6])))) ? ((((arr_26 [i_7 + 1] [i_6 - 2] [9] [i_8 - 2] [i_10] [i_7]) && (arr_26 [i_7 - 1] [i_6 - 2] [i_10] [i_8 - 3] [10] [i_6])))) : (((!((!(arr_26 [i_6] [i_7] [i_7 - 1] [8] [2] [i_10]))))))));
                            }
                        }
                    }
                    var_26 *= (-2075985720 != -7257113277754380085);
                }
            }
        }
        arr_34 [i_6] = ((((max(46030, 2880653848))) ? var_11 : var_9));
    }
    var_27 = (min(var_27, (var_12 >> 1)));
    #pragma endscop
}
