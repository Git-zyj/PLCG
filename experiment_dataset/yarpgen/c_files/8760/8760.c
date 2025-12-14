/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((~(max(((max(var_1, -67))), ((-(arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_14 = ((-(arr_12 [i_0 - 1])));
                        var_15 = (max(var_15, (((66 ? -890698223 : 1)))));
                        var_16 += (!(arr_9 [i_3 - 1] [i_2] [i_1]));
                        arr_14 [i_3] = 56;
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_19 [i_0 - 1] [9] [i_0] [i_0] = (((((var_5 >= (min((arr_10 [i_0] [i_1 + 1] [i_2] [i_4]), (arr_12 [i_2])))))) <= ((((((arr_0 [i_1]) ? (arr_15 [i_0] [i_1 + 1] [i_0] [i_4]) : 890698222))) ? (max((arr_10 [i_0] [4] [4] [i_4]), (arr_10 [i_0] [i_1 - 2] [i_2 - 1] [1]))) : (arr_6 [i_1 - 2] [i_0 + 1])))));
                        var_17 = ((890698212 ? 2294429286 : 47621));
                    }
                    var_18 = (min((((((var_5 ? (arr_12 [i_0]) : (arr_9 [i_0] [10] [i_2])))) ? (((min((arr_18 [i_0 + 1] [1] [i_0 + 1] [i_1] [i_0 + 1] [i_0 - 1]), (arr_15 [i_0] [i_1] [i_1] [i_0]))))) : (arr_5 [i_2] [i_1] [i_0 + 1]))), -82));
                }
            }
        }
        var_19 = (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), -3490681853));
        arr_20 [i_0 + 1] = (arr_15 [i_0] [i_0] [i_0 + 1] [i_0]);
    }
    var_20 |= var_1;
    #pragma endscop
}
