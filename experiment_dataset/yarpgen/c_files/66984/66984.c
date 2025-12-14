/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min((var_15 + var_1), (~-19)))) ? var_3 : ((max(-13, 86)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (((((((arr_1 [i_1]) == (arr_1 [i_0]))))) < (((arr_1 [i_0]) * (arr_1 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 += (min((((arr_12 [i_0] [i_4 - 1] [i_4 + 4] [i_2] [i_4] [20]) * var_9)), ((((((!(arr_1 [i_0])))) * (((var_4 < (arr_2 [16])))))))));
                                var_18 = var_15;
                                var_19 = ((((((arr_4 [i_0] [i_0]) * (arr_10 [i_1]))) - ((max((arr_13 [i_0] [i_0] [20] [i_0] [i_3] [i_3]), (arr_9 [i_0] [i_0] [i_0])))))) + ((((-(arr_1 [i_4]))))));
                                var_20 = (max((max((756823825 ^ 28), (arr_7 [i_4 - 1] [i_4 - 1]))), ((((arr_5 [i_3]) > (arr_7 [i_0] [10]))))));
                            }
                        }
                    }
                }
                var_21 = (((((arr_4 [i_0] [i_0]) & (((arr_4 [i_0] [i_0]) >> (var_0 - 17474195094405295134))))) > (((arr_1 [i_0]) | (arr_1 [i_0])))));
                arr_15 [i_0] [i_1] [i_0] = ((((~(arr_4 [i_0] [i_0]))) ^ (arr_4 [i_0] [i_0])));
                var_22 = ((((((((arr_14 [i_0] [11] [i_0] [i_1] [i_1] [i_1]) <= var_5))) > (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))) ? (30741 || 19) : (((((arr_11 [1] [i_1] [i_0] [i_1] [19]) ? 32764 : 8774501240269563010)) >> ((((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))) - 1292877411))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] = (((((arr_9 [i_5] [i_5] [i_5]) > (arr_9 [i_5] [i_5] [i_5]))) ? (arr_9 [i_5] [i_5] [i_5]) : 126));
        var_23 = ((+((((arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) < (arr_4 [i_5] [i_5]))))));
        var_24 = (((max(var_5, (arr_3 [i_5] [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (((min((arr_19 [i_6]), (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) >> ((((max(22852, 30735))) - 30682))))));
        var_26 = (((((((var_13 / (arr_0 [i_6])))))) * (min(((((arr_7 [i_6] [i_6]) / var_1))), ((-(arr_17 [i_6] [i_6])))))));
        var_27 = ((((max((min(var_3, var_4)), (((-55 <= (-127 - 1))))))) && ((max(((var_5 / (arr_16 [i_6] [i_6]))), (((var_10 - (arr_0 [i_6])))))))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_28 -= (((((arr_19 [i_7]) && (arr_24 [i_7]))) ? ((var_11 * (arr_10 [i_7]))) : ((((((var_15 <= (arr_3 [i_7] [i_7] [i_7])))) + (arr_20 [3] [i_7]))))));
        var_29 = (arr_1 [i_7]);
    }
    var_30 = var_8;
    var_31 = ((-29 <= ((((var_1 >= var_12) == var_2)))));
    #pragma endscop
}
