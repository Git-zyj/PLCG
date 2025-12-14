/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_10 ^= (max(((~(arr_0 [i_0 - 1] [5]))), ((((~(arr_2 [i_0] [i_0]))) * (((!(arr_1 [i_0]))))))));
        arr_3 [i_0] = ((+(((((72 ? (arr_2 [i_0] [i_0]) : var_0))) ? (arr_2 [i_0] [i_0 - 3]) : var_0))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_11 |= var_6;
                            arr_13 [i_1] [7] [7] [i_1] [2] = ((~(((((((arr_11 [i_1] [7] [i_3] [i_4] [i_2] [i_3]) & 1))) != 17425679989025183012)))));
                            var_12 *= ((1 < (132 ^ -31406)));
                        }
                    }
                }
                var_13 = (max(var_13, ((max(var_7, ((((arr_9 [i_1 - 1] [6] [1]) == (((arr_1 [i_1]) ? (arr_9 [13] [i_1] [i_1]) : (arr_9 [9] [i_1] [i_1])))))))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_14 |= ((((((((-31393 ? (arr_12 [i_1] [i_2] [i_5 - 1] [i_2]) : var_9))) ? (((((arr_11 [i_1 - 1] [i_2] [i_2] [i_5] [i_6] [8]) > (arr_10 [i_6]))))) : (((arr_9 [i_1] [1] [i_1]) * (arr_20 [i_1] [i_1] [i_1] [i_1] [9])))))) ? (min(((~(arr_20 [16] [8] [i_5] [10] [1]))), (((arr_6 [i_1] [i_1]) | (arr_15 [8] [i_2] [i_5] [i_6]))))) : (arr_8 [i_1])));
                                arr_21 [i_1 - 1] [i_2] [i_5] [7] [i_6] [i_5] [i_7] = (((min(129, (arr_17 [i_7] [i_5] [i_5] [i_1]))) | ((((var_4 / -31400) ? (((-31386 + (arr_10 [i_1])))) : ((-31403 ? (-32767 - 1) : 1156089100690031752)))))));
                                var_15 -= -3;
                                var_16 += (arr_1 [i_7]);
                            }
                        }
                    }
                }
                var_17 -= 31386;
            }
        }
    }
    var_18 = (max(((max((!var_5), (min(217, -125))))), (max(((max(var_9, var_7))), (max(3554207730, 31392))))));
    #pragma endscop
}
