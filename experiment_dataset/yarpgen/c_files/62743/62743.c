/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 |= (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_17 ^= (((((-(arr_1 [i_1] [i_0])))) || (((~(arr_5 [i_1 + 1] [i_1] [i_0]))))));
            var_18 = ((~(((arr_1 [i_0] [i_0]) ? (arr_4 [i_0] [i_1 - 1] [i_1 + 1]) : (arr_4 [1] [i_0] [i_0])))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_2] [i_2]) ? (((arr_9 [i_2] [i_2] [i_2]) ? ((-(arr_4 [i_0] [i_0] [i_0]))) : (((arr_10 [i_0] [i_2] [i_3]) << (arr_4 [i_0] [i_0] [i_0]))))) : (arr_5 [i_0] [i_0] [i_0])));
                arr_12 [i_2] = (max(((((min((arr_0 [i_3]), (arr_10 [i_0] [i_2] [i_3])))) ? ((108 + (arr_1 [19] [i_2]))) : (((!(arr_4 [i_2] [i_2] [i_2])))))), ((~((((arr_1 [i_0] [i_2]) >= (arr_9 [i_3] [i_0] [i_0]))))))));
            }
            arr_13 [i_2] [i_2] = (((((arr_10 [i_0] [i_0] [i_0]) >> (((arr_2 [i_0] [12]) - 64511)))) < (((((arr_6 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_2] [i_0]) : (arr_1 [7] [i_2]))) ^ (((arr_0 [i_0]) ? (arr_10 [i_0] [i_2] [i_0]) : (arr_6 [i_0] [i_0] [i_0])))))));
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    {
                        var_19 = ((((((((~(arr_20 [i_0] [i_0] [i_0] [i_0]))) + 2147483647)) >> (((arr_5 [i_4] [i_5] [i_6]) - 72)))) + (arr_19 [i_6] [i_6 + 1] [i_6 - 3] [i_0])));
                        arr_23 [i_0] [i_4] [i_4 + 3] [i_4] = ((127 ? 243 : 247));
                    }
                }
            }
            arr_24 [i_0] [i_4] = ((7 * (24 == 31)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_30 [1] [i_4] [15] [i_4] = (((((arr_16 [i_0] [i_0] [i_8]) ? ((~(arr_17 [i_0] [1] [i_0] [20]))) : ((((arr_5 [i_7] [i_7] [i_8]) >= (arr_21 [i_0] [i_4] [8] [i_4] [8] [i_0]))))))));
                        var_20 ^= ((((~(arr_0 [i_0]))) > (((!(((250 ? 147 : 60))))))));
                    }
                }
            }
            var_21 = ((((((~(arr_2 [i_4 + 2] [i_4 + 2]))) + 2147483647)) >> ((((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) && ((((arr_19 [i_0] [i_0] [i_0] [i_0]) >> (((arr_28 [i_0] [i_4] [i_4] [i_0] [i_4] [4]) - 175))))))))));
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 16;i_9 += 1)
    {
        var_22 ^= arr_20 [7] [i_9] [i_9] [i_9];
        arr_35 [i_9] = (arr_0 [i_9 - 1]);
        var_23 = ((((((arr_2 [i_9] [i_9]) < (arr_25 [i_9] [i_9] [i_9] [2])))) | (arr_2 [i_9] [i_9 - 1])));
    }
    var_24 = (max(-130, var_15));
    var_25 = ((+((((var_14 >= var_13) >= ((max(var_9, var_4))))))));
    var_26 = var_14;
    #pragma endscop
}
