/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [9] [i_0] = (arr_5 [1] [i_0]);
                var_13 = (arr_0 [i_1] [7]);
                arr_7 [i_0] [i_0] [7] = ((var_2 ? (((((min(var_5, (arr_4 [i_0])))) && ((var_11 && (arr_2 [i_1])))))) : ((min(var_11, (arr_0 [i_0] [i_1]))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    arr_10 [1] [i_1] |= (((arr_1 [i_2 + 1]) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 2])));
                    arr_11 [i_0] [i_0] = ((var_12 - (arr_8 [i_0] [i_0] [i_2 - 2] [i_1])));
                    var_14 = (((arr_5 [i_0] [i_2 - 3]) ? (arr_5 [i_0] [i_2 - 3]) : (arr_5 [i_0] [i_2 - 1])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = (6985 / -6985);

                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        var_16 = (min(var_16, ((max((((((((arr_2 [i_0]) ? var_10 : var_12))) && (arr_0 [i_4 + 2] [i_4 - 1])))), ((((min(var_2, var_7))) ? (((!(arr_3 [10] [i_1])))) : var_7)))))));
                        var_17 ^= ((!((max((arr_14 [i_4 + 2] [i_1] [i_1] [i_4 + 4] [10]), (arr_14 [i_4 + 4] [i_4 + 2] [i_4] [i_4] [i_0]))))));
                    }
                }
                var_18 = min((((((((arr_1 [5]) ? var_3 : var_7)) + 2147483647)) >> (((var_3 | var_2) + 1557661110)))), (((arr_2 [i_0]) ? var_9 : var_11)));
            }
        }
    }
    var_19 = ((var_12 ? (min((var_4 | var_9), var_10)) : ((((var_9 < var_6) < ((min(var_7, var_11))))))));
    #pragma endscop
}
