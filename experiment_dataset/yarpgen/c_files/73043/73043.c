/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((max((15576622397572283073 | 4664422600055916554), (min(var_13, 15576622397572283083)))), ((max((50 < 2870121676137268533), var_6))));
    var_16 |= (((~15576622397572283083) <= (((((max(var_13, var_14))) ? var_11 : var_3)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max(((var_2 ? (arr_0 [i_0]) : (arr_0 [i_0]))), 245);
        var_17 += (!42777);
        arr_3 [i_0] = ((((min((min(7860282894618125767, 600237662)), 2984607427))) ? (arr_0 [i_0]) : var_1));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1 + 1] = 4294967295;
        var_18 &= (((arr_1 [i_1 - 1]) ? (((((var_7 ? (arr_6 [i_1] [i_1]) : (arr_4 [i_1] [i_1 - 1])))) ? var_0 : (arr_5 [1]))) : ((((((var_1 ? 1671152980 : 1063050245))) ? var_11 : ((var_12 ? (arr_0 [i_1]) : var_1)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_19 &= (min(((min((arr_18 [1] [1] [1] [1] [i_1] [i_3]), (arr_18 [i_5 + 1] [i_1] [i_3] [i_3] [i_1] [i_1])))), (max((arr_12 [i_4 + 1]), (arr_12 [i_5 + 1])))));
                            arr_20 [i_5] [i_4] [i_3] [i_2] [i_5] = (!var_1);
                        }
                        var_20 *= max((min((max((arr_15 [i_1] [i_2] [i_3] [i_1]), var_13)), ((var_7 ? 11244717281246850234 : var_1)))), -87);
                        var_21 = (((arr_0 [i_1]) ? (((-(arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (max((((-17179869184 ? 2147483635 : var_6))), (arr_11 [i_1] [i_2])))));
                    }
                    arr_21 [i_1] = (max(var_11, 14550178351595704445));
                    var_22 = (max(var_22, ((var_2 <= ((-3296 ? (arr_12 [i_3]) : (arr_13 [i_1] [22] [i_3])))))));

                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        var_23 -= (((arr_11 [i_1 - 2] [i_6 + 2]) ? (arr_12 [i_2]) : 37122));
                        var_24 = ((var_1 ? ((max(var_6, ((2605938042 ? (arr_6 [i_1] [i_1]) : var_14))))) : (max((arr_18 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_1] [i_1]), (max(var_8, 9223372036854775807))))));
                    }
                }
            }
        }
        arr_24 [i_1] = ((~((~(arr_17 [i_1])))));
    }
    #pragma endscop
}
