/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (((((776550013 ? -121 : 4294967295))) ? var_1 : (((16 != (arr_4 [i_0] [i_0] [i_0]))))));
            var_18 = (((arr_3 [i_0 - 1] [i_0 - 1] [i_0]) % (arr_3 [i_0] [i_0 + 1] [i_0])));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 = (arr_8 [i_0 - 1]);
            var_20 *= -8064;
            var_21 = (((((var_4 && (arr_2 [2] [i_0])))) * 0));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, ((((arr_5 [i_0] [10] [6]) ? (arr_5 [i_3] [8] [10]) : (arr_5 [i_3] [0] [8]))))));
                        arr_20 [i_4] [i_0] = (arr_2 [i_0 + 1] [i_0]);
                    }
                }
            }
            var_23 = var_16;
            var_24 = (arr_18 [i_3 + 3] [10] [i_3 + 3] [i_3 - 1] [i_3] [3]);
            var_25 = (arr_3 [0] [i_0] [i_0]);
        }
        arr_21 [i_0 + 2] [i_0] = (arr_16 [i_0] [i_0] [i_0 + 1] [i_0]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_26 = var_3;
                        var_27 &= (var_11 * (arr_7 [i_0 - 1] [i_0 - 1] [i_8]));
                    }
                }
            }
        }
    }
    var_28 = (((var_10 < (((var_2 ? var_15 : var_16))))));
    var_29 += (var_5 && ((((((var_15 ? var_6 : var_12))) ? var_7 : ((min(var_2, 129)))))));
    var_30 = (((var_13 != var_7) || var_10));
    #pragma endscop
}
