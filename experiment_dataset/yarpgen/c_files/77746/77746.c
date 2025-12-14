/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 = ((((min(((16777215 >> (var_4 + 8786599058729964297))), var_12))) ? ((((arr_1 [i_0]) || (~var_4)))) : (arr_0 [i_0])));
        arr_2 [i_0] = (((arr_1 [i_0]) ? ((((!((min(var_11, 65523))))))) : ((~(max((arr_1 [i_0]), (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (max(((((arr_4 [i_1] [i_1]) >> (((arr_5 [i_1]) - 62581))))), ((((var_10 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))))));
        arr_7 [i_1] = ((!(((-(arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_16 = (min(var_16, 18446744073709551610));
        var_17 ^= (((arr_10 [i_2 + 1]) > (arr_10 [i_2 + 1])));
        arr_12 [i_2] [i_2] = (((((var_0 ? 16777207 : (arr_3 [i_2])))) ? (((arr_5 [i_2]) ? var_2 : (arr_3 [i_2]))) : (arr_5 [i_2 + 1])));
        arr_13 [i_2] [i_2] = (((arr_0 [i_2 + 1]) ? var_3 : (arr_0 [i_2 + 1])));
        arr_14 [i_2] = var_0;
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_19 [i_3] [i_3] = arr_18 [i_3];
                var_18 = ((var_6 - (arr_11 [i_3 + 1])));
                var_19 = (min(var_19, (arr_3 [i_3])));
                var_20 = (max(var_20, (((-(((((var_11 ? (arr_17 [2]) : 188))) ? var_13 : var_14)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_21 = (((arr_23 [i_6]) ? var_11 : (max((arr_24 [i_5] [i_6] [i_6]), (max((arr_20 [i_5] [i_6]), (arr_20 [i_6] [i_5])))))));
                var_22 = (((((arr_22 [i_5] [i_6]) ? (arr_24 [i_6] [i_6] [i_5]) : (arr_20 [i_5] [i_6]))) + (arr_22 [i_5] [i_5])));
            }
        }
    }
    #pragma endscop
}
