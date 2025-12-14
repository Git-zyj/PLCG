/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0] [i_0]);
        var_17 = (arr_2 [i_0]);
    }
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_15 [i_1] = (((((arr_10 [i_2 + 1] [i_2 - 1] [5]) ? (arr_10 [i_2 - 1] [i_2 - 1] [6]) : var_1)) % (((arr_9 [i_2 - 1] [i_2 + 1] [1]) ? (arr_10 [i_2 + 1] [i_2 - 1] [i_2]) : (arr_10 [i_2 - 1] [i_2 - 1] [i_2])))));
                    arr_16 [i_1] [i_1] [i_3] [i_1] = (((((arr_14 [i_1]) ? (arr_14 [i_1]) : (arr_0 [i_1] [i_2])))) ? (((((var_4 ? var_14 : (arr_5 [1]))) <= (~var_6)))) : 55305);
                    arr_17 [i_1] [i_3] [i_3] [i_3] = (min(((((min((arr_3 [i_1] [i_3]), var_0))) ? var_11 : (((arr_14 [i_1]) ? (arr_1 [i_2]) : (arr_11 [i_1] [1] [i_3]))))), (((((((arr_6 [2] [i_1]) + (arr_6 [i_1] [i_1])))) || var_4)))));
                    arr_18 [i_1] [i_1] = ((~((((arr_5 [1]) >= (arr_6 [i_1] [i_1]))))));
                }
            }
        }
    }
    var_19 = (((((!var_12) && var_14)) ? var_15 : -var_4));
    var_20 &= (10238 % 1);
    #pragma endscop
}
