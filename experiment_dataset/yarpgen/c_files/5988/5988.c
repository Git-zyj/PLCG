/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = (min(var_11, (min((-3409 || -1), -3409))));
        var_12 |= -14336;
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        arr_4 [i_0] = 21800;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = (+-23699);
        var_14 = (!3409);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] = (~-15234);
                        var_15 *= (((((var_5 - var_1) + var_8)) + ((var_2 + (arr_9 [6] [i_2] [i_3])))));
                    }
                }
            }
        }
        arr_17 [i_1] = ((((16008 - ((var_3 ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : -21803)))) ^ ((var_5 ^ (((arr_5 [7] [i_1]) ? var_10 : (arr_10 [i_1] [5] [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_16 = ((((((arr_0 [i_5] [i_5]) ? (var_9 > -24117) : (((arr_14 [i_5] [2] [i_6]) >> (-3409 + 3438)))))) ? ((-24323 ? (((arr_15 [i_5] [i_5]) % (arr_18 [15] [i_6]))) : -26432)) : var_1));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_28 [15] [i_7] = (!var_0);
                            var_17 = ((((max((arr_2 [i_7] [i_6]), (arr_2 [i_7] [i_6])))) / -var_1));
                        }
                    }
                }
                arr_29 [i_5] [i_6] [i_6] = ((((max(-7502, (-24323 + 8416)))) ? -8416 : var_1));
            }
        }
    }
    #pragma endscop
}
