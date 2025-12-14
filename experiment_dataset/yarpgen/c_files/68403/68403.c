/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_17 = ((-20 != (-19048 != -1942077148)));
        var_18 = (-((var_13 ? 27682 : (arr_1 [i_0]))));
        var_19 = (max(var_19, (((40 ? 209 : 18446744073709551615)))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_6 [1] = 59;
        var_20 = var_11;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_21 = (((arr_8 [i_2] [i_2]) ^ (arr_7 [i_2])));
        var_22 = (max(var_22, (((var_8 ? ((18446744073709551605 ? 18446744073709551611 : var_4)) : ((((arr_1 [i_2]) ? var_11 : var_10))))))));
        arr_10 [i_2] [i_2] = (var_2 ? var_0 : ((var_0 ? var_14 : 5345420950505655355)));
        var_23 = (-1 < -1);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    arr_18 [i_4] = var_11;
                    var_24 = (arr_15 [i_3] [i_4]);
                    arr_19 [i_4] [8] |= (((max(281474976710655, (arr_7 [i_5 - 2]))) / var_7));
                }
            }
        }
        var_25 = 7740981049972501798;
    }
    var_26 = var_4;
    var_27 = (max((max(var_14, var_7)), (var_2 != var_13)));
    #pragma endscop
}
