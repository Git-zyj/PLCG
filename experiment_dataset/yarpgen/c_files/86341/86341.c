/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-var_9 ? var_0 : ((var_16 ? var_14 : var_9)))) >> ((((-1 ? ((var_18 ? var_7 : var_7)) : var_14)) - 233))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_21 = (min(var_21, (max((((((657048658 ? -42 : 239))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [12]))) : (((arr_1 [i_0]) % (arr_1 [i_0]))))), ((-((-(arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 = ((!(((-(arr_2 [i_0 + 3] [i_0 + 3]))))));
                    arr_6 [i_2] = min((((((arr_4 [i_2 - 2] [i_1] [i_0 + 4]) < (arr_3 [i_0]))) ? (((arr_2 [i_2 - 2] [0]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_2]))) : ((((!(arr_3 [i_1]))))))), (((-(arr_0 [i_2])))));
                }
            }
        }
        arr_7 [i_0 + 4] [i_0] |= (((((arr_5 [i_0 + 4] [14]) ? (arr_5 [i_0 - 1] [0]) : (arr_4 [i_0 + 3] [i_0 + 3] [i_0 + 2]))) > (min((min(1748437537, 189)), -1748437538))));
    }
    #pragma endscop
}
