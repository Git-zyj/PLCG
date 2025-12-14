/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((max((((((56 >> (arr_0 [i_0])))) ? -11301 : ((11303 ? -11302 : -2303)))), 254)))));
                            var_20 = (min(var_20, (((+((var_14 ? (arr_1 [i_0]) : ((~(arr_0 [i_0]))))))))));
                            var_21 = (min(var_21, (((((!((max(var_8, var_4))))) ? (((((max((arr_3 [i_1] [i_0]), (arr_3 [i_0] [i_1])))) ? ((var_0 ? 31677 : -11301)) : (((arr_3 [i_0] [i_0]) ? (arr_8 [i_0] [15] [i_2] [i_3]) : 11301))))) : (arr_3 [i_2] [i_3 + 1]))))));
                            var_22 = (max(var_22, (((-2303 ? 112 : 1)))));
                        }
                    }
                }
                var_23 = (((((((max(var_0, (arr_2 [i_1] [i_0])))) ? ((2 ? var_12 : var_10)) : (((arr_0 [i_0]) ? (arr_5 [i_0] [1] [i_1] [1]) : (arr_4 [i_0] [i_0] [i_0] [6])))))) >= (min((((2294083631387530300 != (arr_4 [i_0] [i_0] [i_1] [i_1])))), (min(4143591897941977908, 4))))));
                var_24 = var_3;
            }
        }
    }
    var_25 = var_12;
    var_26 = (((2 | 22844) ? ((var_12 ? ((45 ? var_6 : var_16)) : (((max(-2303, 18)))))) : var_15));
    #pragma endscop
}
