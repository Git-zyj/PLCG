/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_11, 10019))) ? 116 : 127));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 *= (!-41061);
            var_14 = (((0 && (arr_3 [i_0]))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_15 = (0 + ((((-131071 >= (!3971979441))))));
                        arr_12 [i_3] [i_2] [8] [2] = (((~9223372036854775807) ? (min(var_4, var_0)) : (max(-2054579781, (min(18446744073709420544, 33))))));
                    }
                    var_16 |= ((9223372036854775807 / ((((!29734) + 693204766)))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_17 ^= (max(((-(var_7 || var_10))), ((((((29734 ? (arr_10 [i_5]) : var_3)) + 2147483647)) >> (!0)))));
        arr_16 [i_5] = (min(21329, -34));
        var_18 = ((((1 ? (min(66, 0)) : 35801)) + 1));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_19 = (arr_0 [i_6] [i_6]);
        var_20 = (max(var_20, (((+(((2054579780 * 2980947535877068191) ? (131071 * 16140901064495857664) : (min(693204766, (arr_13 [0] [0]))))))))));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] = (min((arr_4 [4]), ((var_10 ? var_1 : 14680064))));
        var_21 = (((max((var_11 + 18446744073709420544), var_6)) * (((((~(arr_2 [1] [1]))) + (min(16, -268435456)))))));
    }
    #pragma endscop
}
