/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [8] [8] [i_2] [i_3 + 2] [i_2] = (((((((min(var_15, 19))) ? (((arr_3 [i_0] [i_2]) / 19603)) : (!-815362186309993498)))) ? (((((arr_8 [i_2] [i_1] [i_4 - 1] [i_4 - 1]) + 2147483647)) << (-23 - 18446744073709551593))) : (arr_1 [14])));
                                arr_13 [i_3] [i_1] [i_2] = (((((~((23 ? (arr_11 [i_1] [i_0] [i_1] [i_0] [i_4]) : -7965413108602267123)))) + 9223372036854775807)) >> ((((~((var_6 >> (-18 + 53))))) - 18446744073249906484)));
                            }
                        }
                    }
                    arr_14 [17] = (((16182536066690487269 / (arr_3 [i_0 - 1] [i_1 + 2]))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_0] [i_5] = (max(((((~var_12) || (arr_2 [i_0 - 1] [i_0 - 1] [i_2])))), (~65527)));
                        arr_18 [i_1] [i_2] [i_5] = (arr_2 [i_5] [i_5] [i_2]);
                    }
                    arr_19 [i_0] [15] [15] [15] = (max((((-12 < (arr_15 [i_0] [i_1 + 2] [i_2] [i_0])))), (((18 < (min(var_6, (arr_2 [i_0 + 2] [i_0 + 2] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_26 [i_0 + 2] [i_1 + 3] [7] [i_6] [17] = (~2723955288);
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_6] [i_1] [i_0] = (((((max(-12, 24))) < ((-8032258327684105967 ? (arr_11 [i_0] [i_1 + 2] [i_0] [i_0] [i_0]) : 0)))) ? (arr_22 [i_0] [i_0] [i_2] [i_7]) : ((min(var_5, var_14))));
                                arr_28 [i_0 + 1] [i_1 + 4] [i_2] [i_6] [i_7] = 12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((~(var_3 || 19585))) < (((var_4 != (var_2 <= var_13))))));
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                arr_35 [11] [i_9] [i_8] = (var_7 ^ 4294967295);
                arr_36 [i_8] [i_8] = ((((((arr_16 [i_8] [i_9] [i_9] [i_9]) % var_4))) ? (max(0, ((((arr_16 [3] [i_9] [i_9] [i_9]) >> 19))))) : ((max(65527, (arr_11 [i_8] [i_9] [i_8 - 1] [i_9] [15]))))));
                arr_37 [4] [18] [i_9] = ((~((((9068427554818205070 | -8032258327684105967) || var_9)))));
            }
        }
    }
    #pragma endscop
}
