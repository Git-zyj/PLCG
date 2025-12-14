/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] = (arr_1 [i_0]);
        var_10 = (~32767);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_11 [9] [i_2] [i_1] [i_0] = ((-8759447851000759249 ? (((var_1 >= (arr_1 [i_0])))) : (-32767 - 1)));
                    arr_12 [i_1] [i_1] = ((32767 ? var_0 : (arr_10 [i_0])));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_11 = (max(var_11, ((!(((255 ? var_8 : 0)))))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_12 = 0;
                            var_13 -= (((arr_9 [i_2] [i_2 + 1] [i_1]) ? ((98 ? (arr_16 [i_1] [i_1] [i_3] [i_0] [i_1] [i_1] [i_0]) : -1)) : -250));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_14 = 1;
                            var_15 ^= 98;
                            var_16 = (((!(arr_2 [i_0] [19]))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = ((-(arr_2 [i_3] [i_2 + 1])));
                            var_17 = (min(var_17, 0));
                        }
                        var_18 = ((((1 ? (arr_9 [6] [i_1] [i_2 - 1]) : (arr_9 [i_0] [i_0] [i_3]))) != (-32767 - 1)));
                    }
                }
            }
        }
        var_19 = (arr_14 [i_0] [i_0] [i_0] [i_0]);
    }
    var_20 = (((((var_5 ? var_2 : 1))) + (var_8 / var_3)));
    #pragma endscop
}
