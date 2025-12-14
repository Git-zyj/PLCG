/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = ((((-((127 ? 2097024 : 1)))) + (((((arr_1 [i_0]) != (((max((arr_4 [i_0] [i_0 + 1] [i_0 + 2]), 127))))))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_19 = 32767;
                            var_20 = 1;
                            var_21 = ((arr_6 [i_0] [i_0 - 3] [i_3] [i_4 - 1]) ? (arr_8 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_7 [i_4 - 1] [i_4 - 1] [i_0 + 1] [i_0]));
                            var_22 = (max(var_22, (((~(((2 > (arr_7 [i_0] [i_2] [i_3] [i_4 - 1])))))))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_23 = (max(var_23, (((+(((arr_14 [i_0] [i_0] [i_0 + 2] [i_0] [i_1]) ? 1164545215 : (arr_14 [i_0] [i_0 - 1] [i_0] [i_0] [i_3]))))))));
                            var_24 = 1;
                            var_25 = (min((((~(arr_14 [i_0] [i_0 + 3] [0] [i_0 - 1] [i_5])))), (arr_1 [i_0])));
                            var_26 += 60;
                            var_27 = ((~(arr_13 [i_1] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_28 = (arr_9 [i_0 + 1] [i_6] [i_2] [i_3] [i_6]);
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((((min(809736671, ((6 ? (arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_2]) : -7483322221042536289))))) ? (((arr_12 [i_0] [17] [i_1] [i_0] [i_3] [i_0]) + -2)) : ((~((max(71, 1)))))));
                            var_29 = (arr_12 [i_0] [i_0 + 3] [i_0] [i_0 - 2] [i_0] [i_0]);
                        }
                        var_30 = (min(((((((arr_16 [i_0] [i_0] [i_2] [i_2] [i_3]) ? 65535 : (arr_1 [i_0 - 1]))) > 52))), (min(-1164545218, (min(23053, 4197104337))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    arr_24 [i_0] = (max((max(((min((arr_15 [i_0]), (arr_7 [i_0] [i_7] [i_7] [i_8])))), (arr_11 [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_7] [i_7] [i_8]))), ((min(((max((arr_0 [i_0] [i_0]), (arr_23 [i_0] [15] [15] [i_8])))), -0)))));
                    var_31 = 7;
                }
            }
        }
        var_32 += (min((arr_4 [i_0] [i_0] [14]), (min(((((arr_10 [i_0] [12] [i_0] [i_0 + 1] [1]) && (arr_7 [i_0 - 3] [i_0 - 3] [8] [i_0])))), 16))));
    }
    var_33 = (max(var_6, var_1));
    var_34 = ((128 ? 18446744073707454616 : -8));
    var_35 = (min(var_35, ((max(114, ((var_5 ? ((2020 ? 22 : -5930906894064783253)) : (128 & 11))))))));
    var_36 = (min(var_36, var_13));
    #pragma endscop
}
