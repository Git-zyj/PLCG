/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= -513197000;
    var_11 = (max(var_4, var_6));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_1] = 57153;
            var_12 = (max(var_12, (((234 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))))));
            var_13 = (arr_2 [i_1] [i_1] [9]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                arr_10 [9] [i_2] [i_3] = ((((!(arr_5 [i_0] [9] [i_3])))));
                arr_11 [i_0 + 1] [i_3 - 1] = var_5;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_14 = 32767;
                            arr_16 [i_0] [3] [i_3 + 1] [i_3 + 1] = (min(1, ((((var_5 ? 0 : 1)) <= (arr_0 [i_3 + 1])))));
                            var_15 ^= arr_15 [i_0 + 1];
                        }
                    }
                }
            }
            var_16 = (min(10, ((max((arr_8 [i_0 + 1] [i_2] [7] [7]), 1)))));
            var_17 ^= ((1 ? (!1) : 100));
        }
        arr_17 [i_0] [4] = 25;
        var_18 = (min(var_3, (arr_3 [i_0 - 2] [i_0])));
        var_19 ^= ((((max(var_8, ((min(var_0, (arr_13 [5] [14] [i_0] [i_0]))))))) ^ (min((arr_3 [i_0] [15]), (arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    {
                        var_20 = (((((var_4 && (arr_8 [i_8 + 2] [i_6] [i_7] [i_0 + 1])))) & (-2147483647 - 1)));

                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            var_21 = (max(var_21, ((max((arr_19 [i_0]), ((((max((arr_0 [i_0 + 1]), 18))) & (((arr_25 [i_0] [i_6] [i_7] [i_8] [i_8] [i_9]) ? 1 : (arr_0 [1]))))))))));
                            var_22 *= (max(((((((202512735 ? var_3 : 16))) ? (((arr_28 [i_0] [i_0] [i_7] [i_8] [i_0]) + var_3)) : ((1 ? (arr_25 [i_0 - 1] [i_6] [i_6] [8] [i_9] [i_9 + 1]) : (arr_19 [i_8])))))), 1569460018053594910));
                            arr_30 [i_6] = ((~((min(255, (arr_20 [i_6] [i_9]))))));
                        }
                        var_23 = var_9;
                    }
                }
            }
        }
    }
    #pragma endscop
}
