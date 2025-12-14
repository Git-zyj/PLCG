/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_10, var_8));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [7] [i_0] = max((max(0, 13)), ((((max((arr_1 [i_0]), (arr_1 [0]))) < (max((arr_1 [4]), (arr_2 [i_0])))))));
        arr_4 [i_0] = (((arr_1 [i_0 - 1]) - (max((arr_1 [i_0 - 1]), (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [8])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 *= ((max((arr_5 [i_0 + 1]), ((min((arr_9 [i_2] [i_1]), (arr_9 [i_0] [i_2 - 2])))))));
                    arr_10 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                }
            }
        }

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_17 = (arr_8 [11]);
            var_18 = (arr_12 [i_0]);
        }
        arr_15 [i_0] = (((((arr_9 [i_0] [i_0 - 2]) >> (((min((arr_1 [i_0]), (arr_5 [i_0]))) - 65110081)))) - ((((((arr_6 [i_0]) - (arr_12 [i_0]))) < ((((arr_7 [i_0] [i_0] [i_0 - 2]) < (arr_13 [i_0])))))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_19 = (((((arr_16 [21] [21]) < ((max((arr_17 [5]), (arr_16 [i_4] [i_4])))))) || ((((min((arr_16 [i_4] [i_4]), (arr_16 [i_4] [i_4]))) - (arr_16 [i_4] [i_4]))))));
        arr_18 [1] = min((((arr_16 [i_4] [i_4]) - (arr_16 [i_4] [15]))), (((arr_16 [i_4] [i_4]) | (arr_17 [i_4]))));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_21 [i_5] = (max((max((arr_11 [i_5] [i_5]), (arr_5 [0]))), (arr_17 [i_5 + 2])));
        var_20 = (((min((max((arr_7 [i_5 + 2] [i_5 + 1] [18]), (arr_16 [i_5 + 1] [i_5 - 1]))), (arr_20 [i_5] [i_5]))) - (arr_14 [14] [i_5] [i_5 - 1])));
        arr_22 [i_5] = (max((arr_14 [8] [i_5 + 2] [i_5 + 2]), (max(((max((arr_8 [i_5]), (arr_17 [i_5])))), (min((arr_5 [i_5 + 2]), (arr_20 [4] [i_5])))))));
        arr_23 [i_5 + 1] = (arr_13 [7]);
    }
    #pragma endscop
}
