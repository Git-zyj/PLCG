/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [6] = ((~((~((var_10 ? (arr_0 [i_0] [9]) : -5543))))));
                var_20 = (((5542 <= (arr_2 [i_0] [i_0] [i_0]))));
                arr_5 [i_0] [i_1] [i_0] = ((((((arr_2 [i_0] [i_1] [i_0]) ? var_0 : (((arr_0 [1] [i_1]) ? (arr_1 [i_0] [10]) : (arr_0 [1] [1])))))) ? ((min((0 - 5542), (arr_1 [i_0] [i_1])))) : (max((min(var_5, var_13)), (arr_0 [i_1] [i_0])))));
                var_21 = (min(var_21, ((min((min(((508 ? 15 : -1872940283)), (arr_1 [i_0] [i_1]))), ((-(max((arr_2 [i_0] [i_0] [i_1]), 26)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_22 = (((arr_10 [i_2 + 1]) * (((((max((arr_7 [i_2] [9]), (arr_7 [11] [i_2])))) != (arr_7 [i_2] [i_3]))))));
                arr_11 [i_2] = (min(((min(1, (-2147483647 - 1)))), ((-5543 ? ((((-205908178 > (arr_9 [i_2] [i_3] [1]))))) : (917504 / -758966471419378057)))));
                var_23 += ((((((min((arr_9 [i_2] [i_2] [i_2]), var_9))) ? (((min((arr_8 [1]), (arr_7 [i_2] [i_3]))))) : (max(5, 0)))) + (((865143841 ? 1 : 1872940283)))));
            }
        }
    }
    var_24 = ((var_16 ? (((((var_7 ? var_3 : var_1))) ? var_11 : (var_9 | var_3))) : ((max((min((-32767 - 1), var_16)), 185)))));
    var_25 = ((var_0 == (var_15 * 18446744073709551615)));
    #pragma endscop
}
