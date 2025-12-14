/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_16 |= ((var_8 ? ((((arr_3 [4] [i_1 - 2]) && (arr_3 [14] [i_1 - 1])))) : (((arr_3 [1] [i_1 - 1]) << (((arr_3 [2] [i_1 - 1]) - 53187))))));
                var_17 = (+(max((arr_4 [i_0]), ((~(arr_1 [i_0]))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        var_18 = (!-1375540829);
        arr_7 [i_2 + 1] [i_2 + 1] = (arr_4 [18]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_19 = (min((arr_6 [i_2 + 3] [0]), (min(-1906725799035781602, 18))));
                    var_20 = (max(var_20, (((((~(arr_8 [i_4] [i_2 + 4] [i_3]))) ^ (arr_8 [2] [i_2 + 1] [i_4]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_21 -= (arr_15 [i_2] [1] [i_2]);
                    var_22 = (min(((min(var_0, (arr_17 [i_5])))), ((31 - ((max(42, var_6)))))));

                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        var_23 = (min(var_23, (((13 << (179 - 157))))));
                        var_24 = (max(24, ((-28277 ? 27083 : 1))));
                        var_25 = ((-((((((0 ? (arr_14 [i_5] [i_7 + 2]) : var_10))) && (arr_5 [i_2] [i_2]))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_26 = (((((29 ? -30168 : 1))) ? ((((arr_22 [i_8] [i_8] [i_8] [i_8]) && (arr_19 [i_8] [i_8] [i_8])))) : ((1 << (59319 - 59310)))));
        arr_27 [i_8] = ((((((~(!var_14))) + 2147483647)) >> (var_7 - 4610)));
        var_27 *= (max((((((73 / (arr_12 [1] [i_8] [i_8] [i_8]))) >= -1))), (((var_3 ? 33664 : var_6)))));
        var_28 = arr_1 [i_8];
        var_29 = (arr_3 [i_8] [i_8]);
    }
    #pragma endscop
}
