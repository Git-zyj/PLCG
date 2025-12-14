/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 -= ((var_1 / ((3572226844 ? -var_3 : (min(var_6, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (((((1 || (arr_2 [i_0])))) <= -122));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = 18;
                    var_16 *= ((~1204864339) ? (arr_2 [i_0]) : 1204864339);
                    var_17 = (((arr_4 [i_0] [13] [13]) >= (((arr_2 [1]) ? var_2 : 1))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_8 [i_0] = var_5;
                    var_18 = (arr_3 [i_0]);
                    var_19 = ((~(arr_7 [7] [i_0] [i_0] [7])));
                    var_20 *= ((!(arr_2 [i_1 + 1])));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    var_21 ^= ((((var_5 ? (arr_11 [i_4] [12] [i_1]) : (arr_7 [i_0] [i_0] [i_4] [i_0]))) - (arr_0 [i_4] [i_1])));
                    var_22 = ((((arr_0 [i_0] [i_1]) < (arr_2 [19]))));
                    var_23 = (((arr_10 [i_4 - 2] [i_0]) ? ((1204864336 ? (arr_11 [i_0] [i_1] [i_0]) : 24)) : (((arr_9 [i_0] [i_0]) ^ (arr_2 [i_0])))));
                }
                var_24 = (max(((~((~(arr_10 [i_0] [i_0]))))), ((((max(1, 1))) & ((~(arr_2 [i_0])))))));
                arr_12 [i_0] = ((min(-59, 1)));
                var_25 = min((((((1 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_1] [i_1] [i_0])))) / (((arr_5 [2] [i_1] [10] [i_1]) ? (arr_6 [i_0] [i_1]) : (arr_11 [i_0] [i_1] [i_1]))))), (((!(arr_0 [i_0] [i_1 + 1])))));
            }
        }
    }
    var_26 = (var_5 ? var_9 : (((var_9 % var_11) * 0)));
    #pragma endscop
}
