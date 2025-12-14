/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((((min(var_5, -123))) ? (((arr_2 [i_1] [i_0]) ? (arr_2 [i_0] [i_1]) : 0)) : -7096))) ? (((-(arr_0 [i_1] [i_0])))) : 4744164514463924832));
                var_12 = (((((arr_0 [i_1 + 1] [i_1 + 1]) < var_9)) ? (min(-var_2, (arr_1 [i_1 + 2] [i_1]))) : ((min((((10773156102586791665 <= (arr_2 [1] [1])))), (arr_3 [9]))))));
                var_13 = (max((arr_0 [i_1 - 2] [i_1 + 2]), ((var_5 ? var_11 : (((4744164514463924840 || (arr_3 [i_0]))))))));
                arr_5 [2] &= (((arr_2 [i_1 - 1] [i_1 - 2]) | (((arr_1 [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1 + 1] [i_1 + 1]) : var_9))));
                var_14 = (min(var_14, ((max(var_5, var_3)))));
            }
        }
    }
    var_15 = (min(var_15, 1));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_16 = (max(var_16, (arr_7 [i_2])));
                var_17 = (max(var_17, (arr_6 [i_2] [i_2])));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_6] [i_6] [i_6] = ((var_2 ? (((arr_6 [i_2] [i_3]) | ((var_5 ? 94 : 4744164514463924848)))) : var_9));
                                arr_17 [i_4] = ((-(((((1 ? 10591439944273446519 : var_3))) ? (var_4 / var_5) : var_11))));
                            }
                        }
                    }
                }
                var_18 *= ((~((((((arr_3 [23]) ^ -9223372036854775781))) ? var_10 : (((255 ? (arr_10 [i_2] [i_3] [i_3] [i_3]) : (arr_14 [i_2] [1] [i_2] [i_2] [i_3] [10] [i_2]))))))));
            }
        }
    }
    #pragma endscop
}
