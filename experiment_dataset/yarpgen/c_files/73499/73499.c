/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max(var_19, var_17));
                arr_5 [i_0] [i_1] [i_0] = (arr_4 [i_0] [i_1]);
                arr_6 [i_0] = var_7;
            }
        }
    }
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    var_21 = (arr_9 [i_2]);
                    arr_14 [i_2 + 1] [i_3] [i_4] = (((max(var_5, 2413635577)) ^ (((max((min(-25, var_11)), (min((arr_4 [i_3] [i_3]), var_5))))))));
                    var_22 = (arr_13 [i_2] [i_3] [i_4 + 2]);
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_23 = (min(var_23, ((((((((var_10 >> (((arr_4 [6] [6]) - 77)))) + (((-93 == (arr_13 [i_5] [2] [6]))))))) ? ((-((51287 ? 7606943303642957335 : 2413635560)))) : 13439)))));
                        var_24 = var_13;
                        var_25 ^= -25218;
                    }
                }
            }
        }
        arr_27 [i_5 + 1] [i_5 + 1] = -30;
        arr_28 [i_5] [i_5] = ((((min((arr_21 [1] [i_5 + 1] [i_5]), (arr_21 [2] [i_5 - 1] [i_5 - 1]))))) == (max((max(var_6, 51287)), (!82))));
        arr_29 [i_5] = 52;
    }
    #pragma endscop
}
