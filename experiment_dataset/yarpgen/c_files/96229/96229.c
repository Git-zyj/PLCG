/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (arr_2 [i_3]);

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_14 [i_0 + 2] [i_0] [i_0 + 3] [i_0 - 1] [i_1] = (((((max(var_16, 17851311760693181354)) == (max(1644525398959447222, (arr_9 [i_1] [i_1] [4] [8])))))) != (arr_12 [i_1]));
                                arr_15 [i_4] [10] [i_1] [i_1] [i_0] [5] = ((((var_10 ? (((arr_5 [i_0] [8]) ? (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [5] [i_4]) : (arr_1 [1]))) : ((((arr_10 [i_1]) ? (arr_5 [i_0] [12]) : (arr_8 [i_1] [i_1])))))) * (((((((arr_0 [i_0]) != (arr_3 [i_0])))) >> (var_0 - 145494701))))));
                            }

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_19 [10] [i_1] [i_1] [i_0] = (((arr_7 [i_3 - 1]) ? (((arr_6 [i_3 - 1]) ? (arr_2 [i_0]) : (arr_12 [i_1]))) : (arr_10 [i_1])));
                                var_18 += (((arr_8 [1] [i_0 + 1]) ? (arr_4 [10]) : (arr_4 [12])));
                            }
                        }
                    }
                }
                var_19 = (arr_16 [i_0] [i_1] [i_1] [i_1] [i_0]);
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
