/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((25856 + 36028797010575360) * (((((-(arr_5 [i_0] [i_1] [i_2])))) ? (arr_2 [i_0] [i_1] [i_2]) : (arr_4 [i_1] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_2] [i_0] [i_3] [i_4] = (arr_4 [i_0] [i_0] [i_0]);
                                var_15 *= (((((~(arr_1 [i_0])))) ? (966226629 * 1109026199) : (min(var_12, (arr_3 [i_0] [i_0] [i_0])))));
                                var_16 = ((((min(36028797010575343, (arr_7 [i_2] [i_1] [i_1] [i_1])))) ? (((arr_2 [i_0] [11] [4]) << (986751431 - 986751416))) : 34));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_2] [i_2] = (((arr_7 [i_2] [i_1] [i_1] [i_1]) && (((arr_3 [i_2] [i_1] [i_0]) >= (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0] = ((((max(((var_6 ? 0 : 3285049361)), 55352))) ? (((((((arr_2 [i_0] [9] [i_0]) ? var_11 : 1))) * (((arr_4 [i_2] [i_2] [i_2]) ? var_2 : var_12))))) : (min(-17, (min(var_8, (arr_4 [i_0] [i_0] [i_0])))))));
                                var_17 = (min((max(((max(var_0, (arr_15 [i_2] [i_1])))), ((48 - (arr_4 [i_0] [i_0] [i_0]))))), (((-(arr_1 [i_6 - 3]))))));
                                var_18 = (arr_18 [i_6 - 3] [i_6 - 1] [i_6 - 3] [i_6] [i_2] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, var_9));
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_21 += -3011655627;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_31 [14] [i_7] [i_9] &= arr_28 [0] [i_8] [i_9] [i_10 + 1] [i_9];
                            var_22 = ((12303 || (((((max(-17, 2060581806))) ? 18410715276698976250 : 19458)))));
                        }
                    }
                }
                arr_32 [i_7] = ((((((-1118503012 == ((~(arr_29 [i_7]))))))) > ((~(arr_27 [9] [i_7 + 2] [i_8] [9])))));
            }
        }
    }
    #pragma endscop
}
