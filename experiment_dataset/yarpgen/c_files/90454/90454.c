/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((((((arr_5 [i_2 - 2] [i_0]) | (arr_4 [i_2 + 1] [i_1] [i_1] [i_0])))) ? (arr_2 [i_2 + 1] [i_1 - 1] [i_0]) : ((((!(arr_5 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (arr_3 [i_3] [i_3])));
                                var_14 = (((((-(arr_0 [i_1 + 1])))) > (0 / 2544015342295075444)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_15 ^= var_6;
                            var_16 = (((((min(2811210174, var_8)) ? (arr_20 [i_5] [i_5]) : (((var_1 << (65520 - 65505))))))));
                            var_17 &= min(1942128334, (arr_22 [i_5] [i_7]));
                        }
                    }
                }
                var_18 = ((!(arr_14 [i_6])));
                var_19 = (max(var_19, (arr_22 [i_5] [i_6])));
                var_20 |= ((20 ? (arr_20 [i_6] [i_5]) : (arr_20 [i_5] [i_6])));
            }
        }
    }
    #pragma endscop
}
