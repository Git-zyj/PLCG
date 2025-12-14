/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((-(~4294967279))))));
    var_17 *= 0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] = ((!(arr_1 [i_0])));
        arr_6 [i_0] = ((~(arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((((-(arr_8 [i_1]))) % (arr_2 [i_1] [14])));
        var_18 = (max(var_18, (((-22 & (arr_8 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (arr_1 [i_2]);
        arr_13 [15] = ((min((arr_8 [i_2]), (arr_8 [i_2]))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {
                    arr_23 [i_5 + 1] [i_4] [i_3] = (min((((var_7 >> (((arr_14 [i_3] [i_4]) + 1712423378))))), (arr_17 [i_3])));
                    arr_24 [i_4] = var_8;
                    var_19 = (min(var_19, (((min(((!(arr_22 [i_3] [i_3] [i_3]))), ((var_14 && (arr_1 [i_4])))))))));
                    var_20 = (max(var_20, (((((((arr_2 [i_3] [1]) ? (arr_16 [i_5] [i_3]) : (arr_22 [3] [i_4] [3])))) > var_7)))));
                    arr_25 [i_3] [i_3] [i_3] = ((~(((~(arr_7 [i_3]))))));
                }
            }
        }
        arr_26 [i_3] = ((var_9 | (min(6, (arr_17 [i_3])))));
        arr_27 [i_3] [i_3] = ((min((arr_22 [i_3] [i_3] [i_3]), (arr_22 [i_3] [i_3] [i_3]))));
        var_21 = (max(var_21, (((((((arr_11 [i_3]) ? 17 : (arr_11 [i_3])))) ? (arr_14 [i_3] [i_3]) : 4294967287)))));
    }
    #pragma endscop
}
