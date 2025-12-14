/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_4 [1] [i_0] = (((arr_3 [i_0] [i_0]) ? ((((((arr_0 [i_0]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0])))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0 - 1] [8]))))) : (((((-(arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0 - 2] [i_0 - 2])))))));
        var_16 = (-((0 ? 0 : 60452)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_9 [i_0 - 3] = ((((((arr_0 [i_1]) ? (((~(arr_1 [i_0 - 2])))) : (((arr_1 [i_0]) ? (arr_7 [i_0 - 3]) : (arr_5 [i_0 - 1] [i_0 + 3])))))) ? (max((((arr_0 [i_1]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_3 [i_1] [i_0]))), (max((arr_8 [i_0] [i_0 - 1] [4]), (arr_5 [i_1] [i_0]))))) : ((~((-(arr_6 [i_0])))))));
            arr_10 [i_0 - 1] [i_1] [i_0 - 1] = (((((-(((arr_5 [3] [3]) ? (arr_3 [i_0] [1]) : (arr_3 [i_1] [i_1])))))) ? ((((((arr_7 [i_0]) ? (arr_1 [i_0]) : (arr_6 [i_0])))) ? ((((arr_3 [i_0] [i_1]) ? (arr_1 [i_0 - 3]) : (arr_7 [i_0 + 3])))) : (arr_3 [i_0 - 2] [i_0 - 3]))) : (((min((arr_7 [i_0 + 3]), (arr_7 [i_0 - 2])))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 = ((+(((arr_8 [i_0 + 2] [i_0 + 2] [i_0]) ? (arr_8 [i_0 - 2] [i_0 - 3] [i_0 - 2]) : (arr_8 [i_0 - 2] [i_0 - 2] [i_2])))));

            /* vectorizable */
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                var_18 = (((!21987) ? (((~(arr_12 [i_2])))) : (arr_13 [i_0 + 1] [i_3 - 3])));
                var_19 = ((!(arr_11 [i_3 - 2] [i_0 - 1])));
                arr_15 [i_0] [i_2] [i_3 + 2] = ((~(arr_8 [i_0] [i_3 - 3] [i_3])));
                var_20 = ((+(((arr_2 [i_2] [i_3]) ? (arr_12 [i_0]) : (arr_7 [i_3])))));
                var_21 = (((arr_14 [i_0 - 1] [i_3 - 2]) ? ((~(arr_2 [i_0] [i_2]))) : (arr_5 [i_0 - 1] [1])));
            }
            var_22 = (+((((max((arr_11 [i_0 - 1] [i_2]), (arr_7 [i_0])))) ? (arr_3 [i_0 + 3] [i_0 - 3]) : ((((arr_11 [i_2] [i_0]) ? (arr_7 [i_0]) : (arr_0 [10])))))));
        }
        var_23 = (((((+((max((arr_14 [i_0] [i_0 + 2]), (arr_11 [i_0 + 3] [i_0]))))))) ? (((((-(arr_8 [i_0 + 3] [i_0] [i_0])))) ? ((max((arr_12 [2]), (arr_7 [i_0])))) : (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0 + 3]) : (arr_6 [i_0 + 3]))))) : ((((!(arr_3 [i_0 + 3] [i_0 - 3])))))));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_19 [i_4] = ((((((arr_18 [i_4] [5]) ? (arr_16 [i_4 - 1]) : ((min((arr_17 [i_4]), (arr_17 [i_4 - 1]))))))) ? (arr_17 [i_4 + 1]) : ((((((arr_16 [i_4]) ? (arr_18 [i_4 + 1] [i_4]) : (arr_18 [i_4] [i_4])))) ? ((((arr_16 [i_4 + 1]) ? (arr_18 [i_4 - 1] [i_4 - 1]) : (arr_18 [i_4] [i_4])))) : (((arr_18 [i_4] [i_4 - 1]) ? (arr_17 [i_4]) : (arr_16 [i_4])))))));
        var_24 = (min((((arr_17 [i_4 + 1]) ? (arr_17 [i_4 + 2]) : (arr_17 [i_4 - 1]))), (((arr_17 [i_4 + 1]) ? (arr_17 [i_4 + 1]) : (arr_17 [i_4 + 2])))));
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        var_25 &= (arr_12 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_33 [i_9] [i_8] [i_5] [i_6] [i_5] [i_6] [i_5] = (((arr_20 [i_5 - 1] [i_5 - 1]) ? (arr_20 [i_6] [i_5 - 1]) : (arr_17 [i_5 - 1])));
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_9] = ((~(arr_16 [i_9])));
                        }
                        arr_35 [i_5] [i_5] [2] [i_7] = (((((((((arr_14 [i_8] [i_6]) ? (arr_16 [i_5 + 3]) : (arr_21 [i_5])))) ? (arr_32 [i_6] [i_6]) : (arr_0 [i_7])))) ? (((arr_17 [i_6]) ? (arr_22 [i_5 + 3]) : (((arr_5 [i_6] [3]) ? (arr_3 [i_5] [i_7]) : (arr_6 [3]))))) : ((((min((arr_5 [i_8] [8]), (arr_7 [i_6])))) ? ((min((arr_0 [i_7]), (arr_12 [i_6])))) : (min(13, 6712720343996481619))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
