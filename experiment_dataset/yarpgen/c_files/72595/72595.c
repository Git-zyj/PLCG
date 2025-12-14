/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (((((-1450487522 ? 4408 : (arr_1 [1])))) ? (((((1 ? (arr_1 [i_0]) : (arr_0 [9]))) != (max(0, 1))))) : (~57059)));
        var_13 = ((-(59 == 30008)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] = ((!(((arr_3 [i_1] [i_2 + 4]) || 0))));
                var_14 = (max(var_1, (1 | 3334892434)));
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 6;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_5] = ((((min(1, (arr_8 [i_3] [i_4] [i_5])))) ? (((var_3 != ((((arr_5 [i_5]) <= (arr_12 [i_3] [i_4] [1]))))))) : (((3334892434 == (((arr_12 [i_3] [i_4] [9]) - 2147483647)))))));
                    arr_18 [i_3] [i_4] [i_5] = (~8232);
                }
            }
        }
        var_15 = min(((min(85, 3607036579710113847))), 17166743078395045164);
        var_16 *= (max((+-2147483647), (var_10 == -2048)));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                {
                    arr_26 [i_3] [i_6] [i_7] = (27894 || 8128);
                    var_17 = (max(var_17, (((max(-2147483642, (arr_3 [1] [1])))))));
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 9;i_8 += 1)
    {
        arr_30 [i_8] = ((-116 - ((-3667990191945215488 - (arr_7 [i_8 - 4])))));
        var_18 = ((65535 & (~-33)));
        var_19 ^= ((var_10 ? var_1 : ((((arr_5 [i_8]) <= -17)))));
        arr_31 [i_8] [i_8 - 1] = ((max(0, 21305)));
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        arr_35 [i_9] [8] = ((65011712 > ((((!(arr_1 [i_9])))))));
        arr_36 [i_9] &= ((((((var_10 * var_0) ? ((var_3 ? (arr_33 [i_9]) : var_3)) : (1 - 33)))) ? 27004 : var_2));
    }
    var_20 = ((-((((var_2 % var_9) > 30006)))));
    #pragma endscop
}
