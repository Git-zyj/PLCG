/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((max((!var_0), (!54)))), (min((max(-18804, var_4)), (!var_6)))));
    var_13 = ((((max((~18803), (min(var_6, 18816))))) ? (max((max(0, -18804)), (!1))) : (((((max(var_3, var_11))) ? ((var_2 ? var_10 : 18799)) : (~var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_2] [i_0] = ((~((-((var_5 ? var_9 : var_1))))));
                    var_14 = ((((!(((~(arr_11 [10] [i_2] [i_1 - 4] [i_0 - 2])))))) ? (min(-var_8, ((((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_1 [9]) : (arr_11 [6] [10] [i_1 - 4] [i_0 - 1])))))) : (min(((-(arr_8 [i_0]))), (((!(-9223372036854775807 - 1))))))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_16 [21] [i_3] = ((((!((max(194, (arr_13 [4] [11]))))))));
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    {
                        var_15 = (!-var_4);
                        var_16 = ((+(((!((min((arr_24 [i_3] [i_3] [i_5 + 1] [i_3]), (arr_22 [i_4] [14])))))))));
                        var_17 = (((((~(~12011729302544078010)))) ? ((((max(var_1, var_4))) ? (~var_0) : (~54))) : ((((((var_7 ? (arr_17 [i_3 - 2] [i_3 - 2] [i_5]) : var_8))) ? (max(var_6, var_7)) : (~54))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        arr_27 [i_7] [i_7 - 1] = ((~(~var_2)));
        var_18 = ((((max(((var_5 ? 1 : var_9)), ((min(44968, var_5)))))) ? ((~((max(180, var_11))))) : ((-(!var_4)))));
    }
    #pragma endscop
}
