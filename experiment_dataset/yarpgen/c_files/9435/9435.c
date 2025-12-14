/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0 - 3] [i_1] = ((((min(422125354, 1))) ? (((arr_4 [1] [i_0 + 1]) ? (max(var_8, (arr_2 [i_0] [i_0] [i_0]))) : (((arr_3 [i_1] [i_1]) ? 422125345 : 17399413754077105797)))) : ((((arr_1 [i_0 + 1]) ? var_12 : var_16)))));
                var_17 = (max(var_17, ((((((0 ? (arr_2 [i_0 - 2] [i_0 + 1] [i_0 + 1]) : var_15))) ? ((((((54 ? (arr_0 [i_0 + 2]) : (arr_2 [i_0] [i_0] [i_0])))) ? (((4294967295 ? (arr_3 [i_0] [9]) : 1))) : (((arr_4 [i_0] [i_0]) ? 1 : var_0))))) : (((((var_10 ? var_2 : (arr_2 [i_0 + 2] [19] [0])))) ? ((0 ? (arr_3 [i_0] [i_0]) : var_3)) : ((((arr_1 [i_0]) ? (arr_4 [i_1] [i_0]) : (arr_1 [i_1])))))))))));
                arr_7 [i_0] [14] = ((((((((var_11 ? var_7 : (arr_3 [i_0] [i_0])))) ? (((arr_4 [i_1] [i_0 - 1]) ? var_0 : var_10)) : (((arr_2 [i_0] [i_1] [i_0 - 1]) ? (arr_4 [i_1] [i_0 - 2]) : var_14))))) ? (min(4194303, (min(var_5, (arr_4 [i_0] [i_1]))))) : ((((((arr_4 [i_0] [20]) ? var_2 : var_14))) ? (((min((arr_2 [i_0] [i_0] [i_1]), 1)))) : (((arr_1 [i_0]) ? var_14 : 422125352))))));
                var_18 = min(((2 ? var_2 : -69)), ((var_3 ? var_9 : var_10)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 = (var_3 ? (arr_11 [i_0 - 4] [i_0 - 1]) : (arr_11 [i_0 - 1] [i_0 - 1]));
                        arr_14 [i_3] [13] [i_3] [i_3] = ((var_15 ? (arr_10 [i_3] [i_0 - 1]) : 1));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_18 [8] [i_4] [i_2] [i_2] [i_1] [i_0] = ((var_0 ? var_2 : var_4));
                        arr_19 [7] = ((var_5 ? (arr_17 [i_1] [i_2] [i_4]) : var_10));
                        var_20 = (((arr_15 [i_0 + 1] [i_0] [i_0 - 3] [6] [i_0] [i_0 - 2]) ? var_1 : (arr_15 [i_0 - 4] [i_0 - 4] [i_0] [i_0] [i_0 + 2] [i_0 + 2])));
                        arr_20 [0] [0] [i_2] [i_4] = ((var_8 ? (((0 ? var_15 : 1))) : var_8));
                    }
                    arr_21 [i_0] [i_0] [i_2] [i_0] |= ((((((((0 ? var_3 : -2121701092215413497))) ? var_15 : ((min(var_12, var_6)))))) ? (((((var_4 ? var_2 : var_4))) ? ((1 ? var_10 : (arr_5 [i_0 - 2] [17]))) : (((32767 ? (-127 - 1) : 0))))) : ((((((1 ? 17399413754077105797 : var_0))) ? ((7789948389464130770 ? 1 : -2138152014)) : ((1 ? var_5 : 31)))))));
                    var_21 = (max(var_21, ((min(((((((arr_11 [i_0] [1]) ? var_3 : (arr_1 [i_2])))) ? -119 : (max(4294967295, 1)))), (((((((arr_15 [11] [2] [i_2] [i_0 - 2] [i_0 + 1] [i_1]) ? (arr_4 [i_0 - 2] [i_2]) : (arr_9 [9] [i_1] [5])))) ? (((arr_8 [19] [i_1] [i_2]) ? 0 : (arr_2 [i_0 - 3] [17] [i_2]))) : (arr_2 [i_0 + 2] [i_0 - 4] [i_0 - 3])))))))));
                }
            }
        }
    }
    var_22 = var_15;
    #pragma endscop
}
