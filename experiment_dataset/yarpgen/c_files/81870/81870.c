/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 4937508660935187528));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] = ((~(arr_2 [i_0] [i_2 + 1] [i_2 + 1])));
                                arr_14 [i_0] [i_3] [i_4] [i_4] [i_0] [i_0] = (!(((max(5012049967664547862, (arr_4 [0] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_20 ^= (arr_9 [i_0] [i_1] [i_6] [i_5] [i_5] [i_5] [i_1]);
                                var_21 = ((~(var_0 > var_14)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                {
                    arr_30 [0] [0] [i_8] = ((((((((var_16 - (arr_24 [0] [0] [i_9 + 2]))) != (((!(arr_26 [3])))))))) < 4937508660935187536));
                    var_22 = ((-(((var_13 + 2147483647) << (45 - 45)))));
                }
            }
        }
    }
    #pragma endscop
}
