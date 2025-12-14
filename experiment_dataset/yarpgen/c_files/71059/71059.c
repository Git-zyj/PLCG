/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 |= ((var_17 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0])));
                    arr_7 [12] [i_2] [i_2] = var_1;
                    var_21 = (((arr_0 [i_0] [i_0]) > (arr_0 [i_1] [i_1])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_22 = (arr_6 [i_3] [i_1] [i_0] [i_0]);
                    arr_10 [i_3] [i_1] = var_7;
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_23 ^= (max((((((((arr_2 [i_0]) + 1))) && ((min((arr_2 [i_4]), var_1)))))), (arr_6 [i_4] [i_0] [i_1] [i_0])));
                    var_24 = (min(var_24, ((max(((!(119 || 154))), ((var_0 < (arr_3 [i_1]))))))));
                }
                var_25 = ((var_3 || (((((var_9 ? (arr_5 [12] [12]) : var_5))) != (min(var_16, var_9))))));
                var_26 = (max(var_26, var_6));
                var_27 = ((((98 << var_4) ? 230 : (arr_8 [i_0] [i_1] [i_1]))) + (max((arr_12 [i_0]), ((var_1 ? var_15 : (arr_6 [i_0] [i_0] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_28 *= (((((arr_6 [i_5] [i_6] [i_6 + 1] [i_7 - 1]) && (arr_6 [i_5] [i_6] [i_6 + 1] [i_7 - 1]))) ? (arr_6 [i_7] [18] [i_6 - 2] [i_7 - 1]) : (((arr_6 [i_5] [i_6] [i_6 - 2] [i_7 - 1]) ? (arr_6 [i_5] [i_7 - 1] [i_6 + 1] [i_7 - 1]) : (arr_6 [i_5] [i_7] [i_6 - 2] [i_7 - 1])))));
                    var_29 = var_0;
                    arr_21 [i_5] = (max((min((arr_19 [i_7 - 1] [1] [i_6 + 1]), (arr_19 [i_7 - 1] [i_6] [i_6 - 2]))), var_18));
                    var_30 = (max(var_30, ((max(((min(1, (arr_4 [i_6 - 1] [i_5])))), (arr_8 [i_6] [i_6] [i_6 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
