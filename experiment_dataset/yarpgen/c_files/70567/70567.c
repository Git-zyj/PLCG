/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_18 = (((var_13 <= var_0) != ((-(arr_0 [i_0 - 1])))));
        var_19 += ((-(((arr_2 [i_0 + 1] [i_0 - 3]) ^ (((arr_1 [i_0]) << (var_14 - 32926688400652563)))))));
        var_20 = var_14;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 -= -193456192763206925;
        var_22 = 2913287247106682893;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {
                        var_23 *= (((max((arr_4 [10]), (arr_4 [4]))) ? (((var_12 * (arr_12 [0] [0] [i_4 + 2] [10])))) : ((((((arr_4 [1]) | 829973647168990155))) ? ((var_9 ? 112 : 193456192763206945)) : (~193456192763206925)))));
                        var_24 -= (((max(-193456192763206926, (arr_4 [2]))) % (((~(arr_4 [1]))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    var_25 = (max(15533456826602868719, (max((((arr_13 [i_7]) ? (arr_18 [i_5] [i_6] [i_7]) : var_1)), (arr_15 [i_7])))));
                    var_26 = ((((~(arr_16 [i_7 - 1] [i_6 - 1] [i_6 - 1])))) ? ((~(arr_14 [i_7 - 1] [i_5]))) : (((arr_16 [i_7 - 1] [i_7 - 1] [i_6 - 1]) ? (arr_14 [i_7 - 1] [i_7 - 1]) : (arr_16 [i_7 - 1] [i_6] [i_6 - 1]))));
                    var_27 = ((((((var_7 && var_8) / 193456192763206913))) % (max(((-193456192763206925 ? 1634720258265950730 : 1634720258265950734)), (max((arr_17 [i_5] [i_5] [i_6 - 1] [i_7]), (arr_18 [i_5] [9] [i_7 - 2])))))));
                    var_28 = -193456192763206925;
                }
            }
        }
        var_29 ^= (39465 != 16812023815443600881);
        arr_19 [i_5] = ((((max((arr_15 [i_5]), (((var_9 ? var_11 : var_9)))))) ? (arr_18 [i_5] [i_5] [i_5]) : ((var_16 ? (arr_18 [i_5] [15] [i_5]) : (max(2913287247106682873, 1766281449))))));
    }
    #pragma endscop
}
