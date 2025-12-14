/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((((((var_2 ? var_9 : var_0))) ? var_13 : ((max(var_10, var_0)))))) ? (((((var_11 ? var_11 : var_4))) ^ ((var_1 ? var_3 : var_9)))) : ((var_11 ? (((max(var_11, var_11)))) : ((var_6 ? var_9 : var_13))))));
    var_15 = (min(var_15, ((max(((((((var_0 ? var_5 : var_13))) ? ((var_5 ? var_7 : var_5)) : var_7))), (((((var_13 ? var_11 : var_13))) ? (min(var_9, var_3)) : var_10)))))));
    var_16 = (min((max((min(var_5, var_9)), var_10)), (((((0 ? 435093844 : -77)) / ((var_8 ? var_0 : var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((((((arr_1 [i_0 - 1]) ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_1 + 1])))) - (max((arr_1 [i_1 - 1]), (arr_4 [i_1])))))) ? ((((((arr_4 [i_1]) ? 64 : 70)) / 23307))) : (((arr_1 [i_0 + 1]) ? ((((arr_0 [5] [5]) ? (arr_4 [i_1]) : (arr_3 [i_0 + 1] [i_1])))) : (max((arr_2 [20]), (arr_2 [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2 - 2] [i_1] [i_1] [i_0 + 1] = (((arr_3 [i_1] [i_1]) ? (((((max((arr_7 [i_1]), (arr_3 [i_1] [i_1])))) && ((max((arr_7 [i_1]), (arr_1 [i_1]))))))) : (((arr_10 [i_1] [i_2 + 2]) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
                            var_17 = (min(var_17, (((((min((arr_4 [16]), (max((arr_1 [i_2]), (arr_4 [4])))))) ? (((arr_8 [20]) ? (arr_9 [i_2 - 1] [i_1 - 1]) : (((arr_10 [12] [12]) ? (arr_11 [i_3] [i_2] [i_1] [i_0]) : (arr_7 [2]))))) : (((((((arr_10 [14] [i_2]) ? (arr_7 [20]) : (arr_11 [i_0 + 3] [i_1 + 1] [i_2] [i_3])))) < (((arr_6 [i_0 + 3] [15] [i_0 + 3]) ? (arr_9 [19] [i_1]) : (arr_1 [0])))))))))));
                        }
                    }
                }
                arr_13 [i_0 + 3] [i_0 + 3] [i_1] = (((((((188 < (arr_2 [i_0]))) ? -14 : -106))) ? (((((((arr_4 [i_1]) / (arr_6 [i_0] [i_1 - 1] [i_1]))) != (((arr_3 [i_1] [i_1]) ? (arr_6 [1] [i_1] [i_1]) : (arr_0 [i_0] [i_1 - 1]))))))) : ((((arr_3 [i_0] [i_1]) ? (arr_6 [i_1] [i_0 + 3] [i_0]) : (arr_7 [i_1]))))));
                var_18 = (min(var_18, ((((max((((arr_7 [2]) ? (arr_7 [12]) : (arr_8 [1]))), (arr_0 [i_1] [i_0 + 2])))) ? (((min((arr_11 [i_0 + 2] [i_0] [i_0] [i_1]), (arr_0 [i_0 + 2] [i_1]))))) : ((((arr_6 [i_1] [i_0] [i_0]) ? (arr_6 [18] [4] [i_0 + 2]) : (arr_1 [i_0 + 3]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            {
                var_19 = (max(var_19, ((((((((((arr_16 [i_5]) ? (arr_14 [i_5 - 1] [i_4 + 3]) : (arr_2 [i_5 + 1])))) ? (((arr_10 [i_4] [i_5]) ? (arr_17 [i_4] [i_5 + 1]) : (arr_9 [i_4] [i_5 + 2]))) : ((64 ? 36138 : 65))))) ? ((((((arr_2 [i_4]) * (arr_7 [i_4])))))) : (min((arr_2 [i_4 + 3]), (arr_16 [i_5]))))))));
                arr_19 [i_4] [i_5 - 1] [i_5] = (min((((arr_6 [i_5 + 1] [i_4 + 1] [i_5]) ? ((((arr_2 [22]) ? (arr_0 [i_4 - 2] [5]) : (arr_4 [i_5])))) : (((arr_14 [1] [1]) ? (arr_6 [7] [i_4 - 2] [i_4]) : (arr_2 [15]))))), ((((arr_14 [i_5 - 1] [i_4 + 2]) - (arr_3 [i_4 - 2] [i_5]))))));
            }
        }
    }
    #pragma endscop
}
