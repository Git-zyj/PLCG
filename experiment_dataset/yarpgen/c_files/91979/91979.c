/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) - 4294967287))));
        var_17 += (((((((min(var_0, (arr_0 [i_0] [i_0])))) ? ((min(155, (arr_1 [i_0] [i_0])))) : var_3))) ? (arr_1 [i_0] [i_0]) : 129));
        var_18 = (max(var_18, (((!((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, -var_15));
                    var_20 = (max(((max((arr_7 [i_0] [i_0] [i_1] [i_2 + 3]), var_8))), (max(((((arr_7 [i_0] [i_0] [i_0] [i_0]) && var_14))), (((arr_6 [i_2] [i_1]) ? 1 : (arr_5 [i_0] [i_0] [i_2])))))));
                    var_21 = ((((min(var_14, 32766))) == (((var_5 >= (arr_5 [i_0] [i_1] [1]))))));
                }
            }
        }
    }
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                arr_13 [i_3] [i_4 + 1] [i_4] = var_3;
                var_23 = (((arr_6 [i_4 + 3] [i_4 - 1]) ? ((((!var_12) >= 233))) : (max((~var_5), ((~(arr_8 [i_3])))))));
            }
        }
    }
    var_24 = ((((((((var_6 ? var_9 : var_8))) ? var_3 : (2264105807 >= 536464769)))) ? ((1550245473 + (var_14 ^ var_1))) : (~-var_10)));
    #pragma endscop
}
