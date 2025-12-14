/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = 18446744073709551615;
        arr_3 [i_0] = 18446744073709551615;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_12 = (min(var_12, ((((((-84 ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? -32754 : var_10)))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_13 = (((arr_5 [i_1]) >= (arr_7 [i_1] [11] [i_2])));
            var_14 ^= (((arr_8 [i_1]) ? (arr_5 [i_1]) : (arr_4 [18])));

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_15 = (arr_7 [i_3] [3] [i_3 - 1]);
                arr_11 [2] [i_2] [i_1] = ((!(arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                var_16 = (max(var_16, 11819736618697689770));
            }
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_16 [i_1] [i_2] [i_4 + 2] = var_7;
                var_17 = (min(var_17, (((var_1 ? ((-96 ? 1 : (arr_6 [6] [i_4 + 1]))) : (arr_10 [i_4 + 2] [0] [i_4]))))));
                var_18 = (arr_9 [i_4 + 1] [i_4 + 1] [i_4]);
                arr_17 [i_1] = (((arr_12 [i_4 + 1] [i_4 + 1] [i_1]) ? -74 : (arr_12 [7] [i_4 - 1] [i_1])));
            }
            arr_18 [i_1] = (arr_14 [i_1]);
            var_19 ^= ((!(arr_8 [i_2])));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_23 [i_1] [i_5] [i_1] = ((!(var_5 ^ var_9)));
            var_20 = (1058136545714507623 ? 10634436964050580765 : (!-125));
        }
        var_21 -= ((-100 ? (arr_21 [i_1]) : (arr_5 [i_1])));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_28 [2] [i_6] = (arr_19 [i_6] [i_6] [i_6]);
        arr_29 [i_6] = 34;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_36 [i_6] [14] [i_8] = (((arr_21 [i_7]) ^ (-35 ^ -80)));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_40 [i_6] [i_7] [7] [i_8] [i_9] = (((((var_1 ? -31586 : (((!(arr_25 [i_7]))))))) ? ((((var_3 != (62275 || var_4))))) : (((arr_30 [i_6]) % -105))));
                        arr_41 [i_8] = 154;
                        var_22 = (max(var_22, (arr_31 [15] [4])));
                        var_23 ^= -32763;
                        var_24 = (max(var_24, ((((((12826393470818687279 ? (min(var_10, (arr_14 [i_6 - 1]))) : (arr_34 [i_6 - 1] [i_7] [i_8] [i_9])))) ? (((((var_0 ? 64 : 2165123974))))) : ((-var_3 ? (arr_1 [i_6] [i_6 - 1]) : (max(var_8, 15754704867614715590)))))))));
                    }
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        var_25 -= var_8;
                        var_26 = ((-64 ? ((((arr_19 [i_6] [i_7] [i_10]) - -1))) : ((~(((arr_2 [i_7] [i_6 - 1]) ? var_5 : var_2))))));
                    }
                }
            }
        }
        arr_44 [i_6] [1] = ((18446744073709551606 <= ((18446744073709551614 ? 4365031040874265358 : ((((arr_12 [i_6] [i_6] [i_6]) ? 34 : (arr_27 [16]))))))));
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        arr_47 [i_11] = (arr_8 [i_11]);
        var_27 = (arr_19 [i_11] [i_11 + 1] [i_11]);
    }
    #pragma endscop
}
