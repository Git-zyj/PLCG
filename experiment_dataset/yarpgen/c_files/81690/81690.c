/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (((-15208 ? ((var_3 ? var_12 : var_5)) : 15409)));
    var_16 = (var_8 % var_6);
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] = ((-var_2 || (((384 & (arr_3 [i_1 + 2] [i_1 - 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = ((var_7 % ((((max(var_8, var_8)))))));
                                var_19 = (max(var_19, var_10));
                                var_20 ^= (((arr_0 [10]) ? (((((3238892165 & (arr_1 [14])))) ? (arr_14 [i_0] [1] [i_2] [6] [14]) : (arr_0 [6]))) : (arr_4 [0])));
                                var_21 = (min(var_21, ((((((var_14 ? (arr_13 [i_1] [i_1 - 1] [i_3 + 1] [i_4] [4] [14]) : (arr_13 [i_0] [i_1 + 1] [i_3 + 2] [16] [2] [0])))) ? ((((max((arr_12 [i_4] [i_3] [7] [i_2] [7] [0]), (-2147483647 - 1)))) ? (arr_8 [2] [i_1 - 2] [8]) : var_0)) : (arr_14 [5] [16] [i_2] [i_3] [i_4]))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = ((((max(1029411855224467153, var_4)))) ? (var_11 >= var_2) : (((11 == (var_2 - var_14)))));
                var_22 = (min(var_22, (((((max(var_0, 4294967295))) | ((((max(-24951, var_12))) ? (((var_9 >> (var_7 - 1956197205)))) : 8143720684093584099)))))));
            }
        }
    }
    #pragma endscop
}
