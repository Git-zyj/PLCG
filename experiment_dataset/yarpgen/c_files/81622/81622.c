/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (((var_8 >> (((arr_9 [i_0] [i_1 - 2] [i_2] [i_2] [i_0 - 1] [i_2]) - 30)))) / var_8);
                                var_13 = ((((max(-1, 251))) << (((!(arr_10 [i_0 - 1]))))));
                                var_14 += (min(((min(251, 10839807942338306926))), ((((((var_6 ? 1 : 32768))) ? ((((arr_1 [i_1] [i_1]) ? var_11 : var_3))) : var_1)))));
                            }
                        }
                    }
                    arr_12 [6] [8] [6] [i_1] = 9405857187383457976;
                    var_15 = (max(var_15, var_11));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_16 = ((var_10 + (((-0 ? ((min(var_2, (arr_17 [i_5] [i_5] [i_5])))) : 822164230)))));
                    var_17 *= (~0);
                }
            }
        }
    }
    var_18 = -14;
    #pragma endscop
}
