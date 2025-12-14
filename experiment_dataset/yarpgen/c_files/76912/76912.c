/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_1] |= ((var_5 ? (((((min(2147483647, 1605812938))) ? var_14 : ((1605812958 | (arr_1 [i_2] [i_2])))))) : (min((arr_7 [i_2] [i_1] [i_1] [i_0]), ((min((arr_8 [i_2] [i_1] [i_2]), 27)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (-((((1 || (arr_9 [19] [11]))) ? ((~(arr_13 [i_0] [i_1]))) : (((var_4 == (arr_13 [i_1] [i_1])))))));
                                arr_16 [i_1] [i_1] [i_2 - 2] [i_3] [i_1] [i_4] = (i_1 % 2 == 0) ? (((((((arr_15 [i_1] [i_2 + 1]) || (((340748785 ? 143 : -1605812938)))))) >> ((((max((arr_13 [i_1] [i_1]), (arr_13 [i_1] [i_1])))) - 41))))) : (((((((arr_15 [i_1] [i_2 + 1]) || (((340748785 ? 143 : -1605812938)))))) >> ((((((max((arr_13 [i_1] [i_1]), (arr_13 [i_1] [i_1])))) - 41)) - 152)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [8] [i_1] [i_2] [i_5] [8] = ((((min(-var_7, (arr_0 [i_6])))) / (((arr_6 [i_0] [i_0]) ? (((max(-106, 50)))) : var_16))));
                                var_18 = ((((!(!8367756865720902218))) ? (((((var_0 ? 32 : var_0)) >= ((-1334463099 ? 1053796781 : var_14))))) : (((!(((var_12 ? var_2 : var_15))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 2735;
    #pragma endscop
}
