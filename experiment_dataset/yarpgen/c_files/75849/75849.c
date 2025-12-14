/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = ((((!(arr_5 [i_0] [i_1]))) ? (((max(1, (arr_4 [i_0] [i_0]))))) : var_13));
                var_18 = ((((min(-8265, var_9))) << ((((((11534 % (arr_5 [i_0] [i_1]))))) - 48))));
                arr_7 [i_1] [i_1] [i_1] = ((4659 ? (((!(arr_6 [i_1])))) : (((!var_16) ? (!3) : (((!(arr_0 [i_1]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_19 = ((max(-2025691750, -91)));
                    var_20 = (arr_5 [i_3] [i_3]);
                }
            }
        }
        arr_14 [i_2] [i_2] = (min(((18446744073709551597 ^ (~var_14))), (((~(arr_12 [0] [i_2]))))));
        arr_15 [i_2] = (max((arr_2 [i_2]), (((((var_7 ? 32749 : (arr_5 [i_2] [i_2])))) ? ((9231 ? (arr_11 [i_2]) : -8265)) : (var_2 % var_8)))));
    }
    var_21 = var_14;
    var_22 = (-8265 != 13155);
    #pragma endscop
}
