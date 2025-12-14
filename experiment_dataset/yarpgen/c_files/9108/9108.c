/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((((arr_4 [i_1]) ? (arr_4 [i_1 - 2]) : (max(var_5, var_4)))));
                var_16 = ((((~(arr_3 [i_1 - 2]))) & (((arr_3 [i_1 - 2]) ^ (arr_3 [i_1 - 3])))));
                var_17 = (max(var_17, ((((((((((arr_3 [i_0]) ? (arr_4 [i_1]) : (arr_3 [i_1])))) ? (arr_2 [i_0] [i_1]) : ((var_7 + (arr_2 [i_0] [i_1])))))) ? (((arr_3 [i_0]) ? (((arr_3 [i_0]) ? var_2 : var_3)) : var_2)) : (((max((arr_3 [i_1 - 3]), (arr_3 [i_1 - 2]))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_10 [i_4] [i_4 - 1] [i_1] [i_1] [i_1]) ? (((arr_10 [i_4] [i_4 - 2] [i_4] [i_4] [i_4]) ? (arr_9 [i_1] [i_4 - 2] [i_1] [i_1] [i_1]) : (arr_10 [i_4 - 2] [i_4 - 2] [i_4] [i_2] [i_2]))) : (~var_2)));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = var_5;
                                var_19 = (arr_3 [i_0]);
                            }
                        }
                    }
                }
                var_20 = (((var_8 >= ((~(arr_8 [i_0] [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_21 = (max(var_8, var_6));

    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    {
                        arr_24 [i_5] [i_5] = (arr_2 [i_5] [i_5]);
                        arr_25 [i_6] [i_5] [i_6] [i_5] [i_5] = (((((max((arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]), var_8)))) >> (((min(var_9, -var_5)) - 56))));
                    }
                }
            }
        }
        arr_26 [i_5] = (max(((~(((arr_20 [i_5]) ? var_4 : (arr_3 [i_5]))))), (~var_6)));
    }
    var_22 = var_7;
    #pragma endscop
}
