/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((~(arr_0 [i_0]))) <= ((var_1 ? 605408556 : (arr_0 [i_0])))));
        var_13 = (arr_0 [11]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_1 [i_1]);
        var_14 = var_1;
        var_15 = var_2;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [2] = ((((!(arr_5 [i_2]))) ? var_12 : ((((!(arr_2 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    arr_17 [1] [i_4] [i_2] = (!247);
                    arr_18 [i_3] = ((1 > ((~(min(3630420087, -1187946575))))));
                    var_16 = ((~(75 & 664547214)));
                }
            }
        }
        var_17 = (min(var_17, (((664547220 ? 11212614402863437498 : 3630420081)))));
        var_18 = (((arr_14 [0] [i_2] [i_2] [12]) ? ((((((var_10 ? (arr_12 [i_2]) : 664547220))) ? (arr_9 [2]) : (arr_14 [i_2] [i_2] [i_2] [i_2])))) : 11212614402863437498));
    }
    var_19 = var_11;
    var_20 = var_5;
    #pragma endscop
}
