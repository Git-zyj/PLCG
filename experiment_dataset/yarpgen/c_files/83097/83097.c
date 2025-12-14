/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((1 ^ (arr_3 [i_0])));
                    var_21 -= var_10;
                    var_22 = (min(var_22, (var_11 / var_16)));
                    arr_8 [i_2] |= (max(1, (((max(2147483647, 1)) > -10264))));
                }
            }
        }
    }
    var_23 = (min(var_23, var_1));

    /* vectorizable */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_12 [12] [i_3 - 2] &= 1;
        arr_13 [i_3] [i_3] = (!var_19);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4 - 1] = (!-13828);
        arr_17 [1] [i_4] &= ((var_0 ? 0 : var_5));
        arr_18 [4] = (((!-275678552) * 1));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                {
                    var_24 &= (max(-var_16, (max(var_7, 8048881052667907390))));
                    var_25 = ((((max((arr_10 [i_6 - 1]), (arr_24 [i_6 - 2] [i_6] [i_5] [i_7 - 1])))) ? (((!(arr_10 [i_6 + 1])))) : (!1)));
                    arr_27 [i_7] = 0;
                }
            }
        }
        arr_28 [i_5] = 2239621026;
    }
    #pragma endscop
}
