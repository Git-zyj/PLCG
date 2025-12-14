/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_1 * (var_0 / var_6)));
    var_21 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((arr_1 [i_0]) << (((arr_1 [i_0]) - 375065902)))) << (((arr_0 [i_0]) - 312211506426155301)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 ^= (((((arr_7 [i_0] [i_1] [i_2]) + (arr_2 [i_2]))) >= (((arr_2 [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_2 [i_1])))));

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_23 = (((((((((arr_8 [1] [i_1] [1] [13]) - (arr_9 [i_0] [i_0] [i_2])))) ? ((((arr_2 [7]) ? (arr_9 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [i_2] [i_3 - 1])))) : (((arr_6 [1]) ? (arr_0 [i_3]) : (arr_7 [i_0] [i_1] [13])))))) ? (arr_8 [i_0] [i_3 + 4] [i_2] [i_0]) : ((((arr_4 [i_1] [13] [i_3]) ? (arr_9 [15] [i_1] [1]) : (arr_6 [i_0]))))));
                        var_24 = (((((arr_7 [i_0] [i_0] [i_2]) ? (arr_4 [i_0] [i_3] [i_2]) : (arr_0 [i_0])))) ? ((~(arr_0 [i_0]))) : (((arr_8 [i_0] [8] [i_2] [i_3]) ? (arr_5 [i_0]) : (arr_6 [i_1]))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_14 [6] = (arr_8 [i_4] [i_4] [11] [i_4]);
        var_25 = ((((arr_10 [i_4] [i_4]) / (arr_10 [i_4] [9]))));
    }
    var_26 = (var_2 / var_8);
    var_27 = (var_8 / var_17);
    #pragma endscop
}
