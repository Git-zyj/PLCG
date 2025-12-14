/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((11 ? ((((((arr_3 [i_0] [i_0] [i_0]) ? -2322595442671897438 : (arr_1 [4] [0])))) ? var_3 : (((var_2 ? 25137 : 0))))) : (((var_0 ? 23218 : 58)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_10 = (max(var_10, (((var_2 ? 58 : ((((57 ? var_5 : var_5)))))))));
                            var_11 = 1;
                            var_12 = (((((((4294967295 ? 18446744073709551615 : 1129651748))) ? var_3 : (arr_6 [i_0] [5] [i_1])))) ? -1 : ((1 ? (((-32767 - 1) ? var_1 : var_0)) : (((arr_6 [i_0] [i_1] [i_1]) ? (arr_7 [i_1] [i_3] [i_1] [i_2] [i_1] [i_1]) : var_1)))));
                            arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3 + 3] = ((((arr_3 [i_0] [i_0] [i_3 + 1]) ? (arr_5 [i_1] [i_1] [14]) : (((arr_2 [i_0]) ? -9 : var_6)))));
                        }
                    }
                }
                arr_10 [1] [i_1] [i_1] = (((((((arr_3 [i_0] [i_0] [i_1]) ? (arr_1 [6] [i_0]) : 7892)))) ? ((((arr_3 [i_0] [i_0] [8]) ? 57 : 1))) : ((((arr_6 [i_1] [i_1] [i_1]) ? (arr_7 [i_1] [i_1] [i_0] [i_0] [i_0] [i_1]) : ((8523093951610390022 ? var_7 : (arr_1 [i_0] [2]))))))));
                arr_11 [0] [i_1] [0] &= ((((((var_0 ? var_5 : (arr_5 [4] [4] [4])))) ? ((198 ? 10289341726246279403 : (arr_8 [i_0] [i_0] [1] [i_1]))) : 57)));
            }
        }
    }
    var_13 &= (((var_5 ? ((var_5 ? var_9 : var_5)) : var_4)));
    var_14 = -31741;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_5] [i_5] = ((-31741 ? ((var_1 ? (((var_0 ? -41 : var_7))) : -16)) : ((((((arr_15 [i_4] [i_5] [i_5]) ? var_7 : -43)))))));
                arr_17 [i_4] [1] &= 205;
            }
        }
    }
    #pragma endscop
}
