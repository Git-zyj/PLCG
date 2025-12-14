/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_7, (2021941622 < 7648142925974434730)));
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 -= (min((min((arr_1 [i_0]), (max(7648142925974434730, 771115930633917418)))), (((((max(-7648142925974434727, 0))) ? -4 : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 = (max((max((max(1, (arr_5 [3]))), -7648142925974434732)), (0 - 1)));
                    var_21 = 1;
                    arr_8 [i_0] = (min((1 <= -1812161250), var_3));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_22 += (~1);
        var_23 = (min(var_23, -1868376660255605482));
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                {
                    var_24 = (max(-0, ((max((arr_14 [i_4 + 3] [i_4 + 3] [i_6 - 3]), 1)))));
                    arr_17 [i_4] [i_4] [i_6] [6] = (min((arr_7 [i_6 - 2] [i_6 + 1] [i_6] [i_6 - 2]), (((arr_14 [i_6 + 1] [i_6 - 3] [i_6 - 3]) ? (arr_14 [i_6 + 1] [i_6 + 1] [i_6]) : 134))));
                }
            }
        }
        var_25 -= (((((min(var_16, 122)))) + var_4));
    }
    var_26 = ((!((min(((6 ? 3438205187 : 54)), (40085 || var_3))))));
    #pragma endscop
}
