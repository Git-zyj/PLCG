/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_2] [i_2] [i_0] = (~4050255678);
                        arr_11 [i_0] [i_2] [i_0] [i_3] = (((((-(arr_0 [i_2])) | -0))));
                        arr_12 [i_0] [i_0] [i_1] |= (((!17825903180236660023) ? (18446744073709551615 != 1604966975) : (((((arr_8 [i_3]) != (arr_0 [i_0]))) ? (min(var_4, var_9)) : (((var_0 ? (arr_0 [i_1]) : var_11)))))));
                    }
                }
            }
        }
        var_14 *= (arr_8 [i_0]);
        arr_13 [i_0] [i_0 - 1] = ((12030000734443821802 ? (min((arr_8 [i_0 + 1]), 64)) : (32767 % 244711618)));
        arr_14 [i_0] = ((!(!49922)));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_21 [i_5] [i_4] = (arr_4 [i_5]);
                var_15 = (min(var_15, var_7));
                var_16 = (arr_19 [i_4] [i_4]);
                arr_22 [i_4] = (min((arr_4 [i_4]), (arr_17 [i_5])));
            }
        }
    }
    var_17 = var_7;
    var_18 = ((45637 << (1152067578299396935 - 1152067578299396927)));
    var_19 = var_13;
    #pragma endscop
}
