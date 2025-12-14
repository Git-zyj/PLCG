/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((1611 + -1611), (((!-662443688540736093) + (min(var_2, (arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] [i_1] = (min(-1613, (min((arr_5 [i_1 + 3] [i_2 - 1] [i_1 + 3]), 12839))));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = (((!(arr_6 [i_0]))) ? (((((max(0, 0)))) ^ 606087839)) : 2223407687);
                }
            }
        }
        var_13 = ((~(max((arr_7 [i_0] [i_0] [i_0]), (min(4294967295, (arr_6 [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_16 [i_3] = (arr_15 [i_3]);
        var_14 = (((var_10 / var_4) ? (max(var_3, (arr_13 [i_3]))) : (((~(((arr_14 [i_3] [i_3]) >> (var_10 + 1925938843))))))));
    }
    #pragma endscop
}
