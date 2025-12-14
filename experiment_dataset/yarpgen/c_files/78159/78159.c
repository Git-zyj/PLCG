/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [1] [i_0] [5] = -24092;
                    var_16 = ((9918 ? 8259 : -6612));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 += (((min(var_15, (arr_1 [i_0] [i_2])))) ? (max(17553848995081795975, -6616)) : ((max((((-8584 + 2147483647) << (var_0 - 16223867403939248850))), -6612))));
                                var_18 = (~8575);
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_4] = ((-var_1 ? (~7) : (min((arr_9 [i_0] [i_1] [i_0] [i_0]), (arr_12 [i_4] [i_3] [i_2] [9] [i_0])))));
                            }
                        }
                    }
                    var_19 -= (min(((-(arr_2 [i_2]))), (((~(arr_13 [i_0] [i_2] [i_0] [18] [i_1] [0]))))));
                    var_20 += 6611;
                }
            }
        }
        var_21 = (min(var_21, (((var_4 < (arr_7 [i_0] [2] [i_0]))))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_22 = (arr_0 [i_5] [i_5]);
        var_23 = 1;
        arr_17 [5] = (((arr_6 [i_5] [i_5] [i_5]) + -6612));
    }
    var_24 ^= var_0;
    #pragma endscop
}
