/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (min((((153 ? -771252474 : (((arr_1 [i_0] [i_0]) ? var_5 : var_3))))), ((((((arr_6 [i_0] [i_1]) ? (arr_2 [i_0] [i_0]) : 0))) ? (!9) : var_1))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 &= (max((((0 ? 0 : (arr_6 [i_0] [i_1])))), -3121246438105882095));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_16 = (arr_2 [i_0] [i_0]);
                        arr_12 [i_0] = (((arr_1 [i_0] [i_1]) ? 4294967295 : (((arr_5 [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_3] [i_1]) : 3276907647053605774))));
                    }
                }
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] [i_1] [i_0] = var_8;
                    arr_16 [i_0] [i_1] [i_0] [i_1] = var_0;
                    arr_17 [i_0] [3] [3] = var_8;
                    arr_18 [i_1] [i_0] = -4052112150031336032;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_21 [i_0] [1] [i_0] [i_5] = (((arr_8 [i_0] [i_0 - 2]) ? 16282 : 2047));
                    arr_22 [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((233 ? (((arr_11 [i_5] [i_1] [i_0]) ? (arr_2 [i_0] [i_0]) : 16282)) : 510620369));
                    var_17 ^= -6107951178242187826;
                }
            }
        }
    }
    var_18 = (((((-3276907647053605774 != ((7 ? -15892 : 3897856558483225089))))) != (262080 != var_9)));
    var_19 = (max((((var_4 ? 12576208786584014877 : var_14))), (((((16272 ? (-9223372036854775807 - 1) : var_9))) ? ((var_12 ? var_13 : 3897856558483225090)) : -23))));
    #pragma endscop
}
