/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 -= (arr_0 [i_0 - 1]);
                var_12 += ((min((arr_4 [i_0 + 2] [5] [i_0 - 1]), (arr_1 [i_0 + 2] [4]))));
                var_13 -= (min((~var_6), ((var_10 ? (arr_3 [i_0] [i_0 - 1] [i_0]) : ((max(15648, 79)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            {
                var_14 = ((((((arr_6 [i_2 + 1]) <= var_1))) % ((~(arr_8 [i_2 + 1])))));
                arr_10 [i_3] = ((~(((arr_7 [i_2 - 1] [i_3]) ? (((arr_8 [i_2]) ? 8 : 0)) : ((max((arr_8 [i_3]), (-127 - 1))))))));
                var_15 = (max(var_15, (((~((((var_0 ? (arr_9 [i_2] [i_3 + 1] [i_3 + 1]) : (arr_8 [i_2]))))))))));
            }
        }
    }
    var_16 += ((max(((var_1 ? var_2 : var_9)), ((max(var_7, var_0))))));
    #pragma endscop
}
