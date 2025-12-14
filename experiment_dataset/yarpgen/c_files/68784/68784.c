/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 |= (((max(-45, 8188))) ? ((((max((arr_1 [i_1] [i_0]), (arr_2 [i_0])))) ? var_19 : (((var_6 == (arr_3 [12] [i_0])))))) : 238);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_1] = ((((max(26366, 130))) ? ((((arr_5 [i_1] [3] [16]) ? (arr_3 [i_0 + 1] [i_0 - 1]) : ((max((arr_2 [i_1]), var_18)))))) : 281474976710652));
                    var_21 -= 1;

                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        var_22 = (max((((19319 ? 61367 : ((var_2 ? var_11 : (arr_3 [i_0] [i_0])))))), ((~(arr_0 [i_0 + 1] [i_3 + 2])))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_23 = (max(1, ((0 | (arr_12 [5] [8] [i_2] [i_3])))));
                            var_24 = (max(var_24, ((max(112, (arr_1 [i_3 - 2] [i_3 - 2]))))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = var_1;
                            var_25 = var_1;
                        }
                        arr_17 [i_1] [i_1] [i_2] [i_2] [i_2] = (arr_11 [i_1] [i_1] [0]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_26 = ((-45 ? (arr_8 [i_0 + 1] [i_1] [5]) : 8384512));
                        var_27 += (var_18 && var_17);
                        var_28 = (((arr_2 [i_0 - 1]) | var_4));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_29 = (~223);
                        var_30 += (arr_4 [0] [i_2]);
                        var_31 ^= (arr_1 [i_0 + 1] [i_1]);
                        var_32 *= (!1);
                        var_33 |= (arr_1 [i_0 + 1] [i_0 + 1]);
                    }
                    arr_24 [i_0] [i_0 + 1] [i_1] [15] = (max(0, ((245 ? 4294967295 : 1))));
                }
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_34 ^= ((1839103084 ? 46216 : (((arr_27 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_8]) % var_2))));
                        var_35 = (arr_28 [i_0] [i_1] [i_7 - 2] [i_1]);
                        var_36 = (min(var_36, var_4));
                    }
                    arr_30 [i_1] [i_0] [i_7] = ((~(((max(2905167581447593724, var_9)) - (arr_19 [i_1] [i_7] [i_1] [i_1] [i_1])))));
                }
            }
        }
    }
    var_37 = ((((max(((15872 >> (var_8 - 155))), -8170))) ? (~3917) : var_17));
    #pragma endscop
}
