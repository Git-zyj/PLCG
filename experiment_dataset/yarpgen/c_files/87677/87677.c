/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] &= 13;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_12 = (min(var_12, 55));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_16 [1] [i_2] [i_4] = ((((min((arr_10 [i_0] [i_2]), (arr_10 [i_0] [i_2])))) ? (((arr_2 [i_0]) ? (arr_10 [i_2] [i_2]) : 200)) : var_2));
                            var_13 = (max(var_13, (((((max((arr_8 [i_0] [i_3]), (~var_0)))) ? 1 : var_0)))));
                        }
                    }
                }
            }
            var_14 = (max(var_14, (((((((((var_8 ? 48222 : 1))) ? 48 : (((arr_10 [8] [8]) ? (arr_6 [i_0] [6] [i_1]) : (-9223372036854775807 - 1)))))) ? ((((((arr_8 [i_0] [i_1]) - (arr_11 [i_0] [6])))) ? var_9 : ((-(arr_14 [18] [i_0] [i_1]))))) : 1)))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_15 ^= (((arr_18 [i_5] [i_5] [i_0]) ? ((min(var_2, -2))) : (max((arr_6 [1] [i_5] [i_0]), (arr_6 [i_0] [i_5] [i_5])))));
            arr_20 [i_0] = (min((max((arr_6 [i_5] [i_5] [i_0]), (arr_6 [17] [i_0] [i_0]))), ((+(((arr_7 [i_0] [i_5] [i_0]) ? 37 : var_10))))));
            arr_21 [1] [i_5] = ((~((((min((arr_1 [i_0]), (arr_12 [6])))) ? (((max((arr_8 [i_5] [i_0]), (arr_2 [i_0]))))) : ((312695390 >> (54232 - 54217)))))));
        }
    }
    var_16 = ((var_6 / ((min(54222, 1)))));
    #pragma endscop
}
