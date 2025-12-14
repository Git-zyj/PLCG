/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = (((-104 + 29640) >= ((var_11 ? (1 * var_5) : (((arr_0 [i_2]) ? (arr_2 [21]) : (arr_0 [0])))))));
                    var_14 = ((((((arr_10 [i_0] [i_1] [i_2] [i_1]) ? -29652 : 61635))) ? (arr_10 [i_2] [i_1] [4] [i_0]) : (arr_10 [i_0] [i_1] [i_2] [1])));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_15 = ((((arr_3 [i_3] [i_3]) || (arr_13 [i_3] [i_3 - 1] [i_3 - 1]))));
                        var_16 |= ((-(arr_10 [i_0] [i_1] [i_2] [i_3 - 1])));
                        arr_15 [i_0] [i_1] [i_2] [i_3] = var_9;
                    }
                    for (int i_4 = 4; i_4 < 19;i_4 += 1)
                    {
                        var_17 = (((~var_10) ? ((((max(1, -14765))) ? (min(29644, 6)) : var_0)) : (((((arr_0 [i_4 - 4]) && var_13))))));
                        var_18 ^= 65524;
                        arr_20 [i_4] [i_1] [i_0] = ((arr_14 [i_4] [i_1] [i_1] [i_0]) ? (((!var_11) ? ((14781 ? 61 : 16)) : (((var_5 ? -29654 : var_13))))) : (((max(var_3, -29654)))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_23 [18] = ((53 ? 29653 : -14772));
                        var_19 = var_11;
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_2] = (((((((max(1, 43))) / 177))) ? (max(((-18 ? -461702785607138890 : 255)), var_8)) : var_5));
                }
            }
        }
    }
    var_20 = ((var_3 ? ((((((var_3 ? var_5 : 8226447806990488774)) < var_4)))) : (((((var_10 ? var_7 : var_10))) / 119))));
    var_21 = (min((((!(((var_13 ? 4294967288 : var_13)))))), var_5));
    var_22 = (((((((var_11 ? var_1 : -9186)) | 65535))) ? (((var_3 - (var_9 + var_1)))) : (((((var_12 ? 1 : 0))) / 55360318417798855))));
    #pragma endscop
}
