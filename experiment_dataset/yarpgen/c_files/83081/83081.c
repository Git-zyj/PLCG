/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2 - 2] [i_3] = (min(((var_4 ? (5814543895486175171 / 3955256652553688038) : ((-5814543895486175171 ^ (arr_6 [i_0] [6] [i_0]))))), (max((-5814543895486175172 - 0), (max(var_2, 5814543895486175170))))));
                        var_11 -= ((-(((arr_0 [i_0 - 1]) ? var_6 : (arr_0 [i_0 + 2])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_12 = (1 ? (max(255, ((1640820754 ? -21541 : 885088687297326270)))) : (1 == -115));
                        var_13 = var_1;
                        arr_17 [i_6] [i_0] [i_0] [i_0] = (((arr_8 [i_0] [i_0 + 2] [i_0] [i_0]) != (arr_0 [i_0])));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_21 [12] |= (!5814543895486175188);
        arr_22 [i_7] = (arr_13 [7] [i_7]);
        arr_23 [i_7] = ((((max(var_2, (((arr_18 [i_7]) ? var_1 : 255))))) ? 0 : ((((-12037 / -4448252286980399614) <= ((var_10 ? -7941988881484677339 : var_10)))))));
        arr_24 [i_7] [i_7] = ((!(arr_7 [i_7] [i_7] [i_7] [i_7])));
        var_14 = (-(23922053 == 13653));
    }
    var_15 = ((((var_7 / (min(var_1, var_4)))) | var_1));
    #pragma endscop
}
