/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -var_2));
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (var_5 << ((((~(max(var_6, var_5)))) - 554907082)));
                var_20 = (-var_11 ? (((arr_0 [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_0 [i_0]))) : (arr_4 [i_1] [i_1]));
                var_21 = (4238237627 ? (max(655364193, 295027535)) : (min(var_4, var_2)));
                var_22 = (max(var_22, (max((arr_0 [8]), ((((min((arr_0 [i_1]), 1269221716))) ? (arr_4 [i_0] [i_0]) : (min(var_4, var_2))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_3] |= (var_11 ? ((((min((arr_8 [i_3] [i_1]), (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? var_3 : (arr_1 [i_2] [i_3]))) : (((arr_5 [i_0] [i_1] [i_0] [i_1]) >> (((arr_5 [i_0] [2] [i_0] [0]) - 2998255920)))));
                            var_23 *= (+(((arr_3 [7] [i_3]) ? ((var_7 ? 3142205588 : var_0)) : (((arr_4 [i_0] [i_0]) ? (arr_5 [i_0] [14] [i_0] [0]) : var_9)))));
                            var_24 *= (((((arr_2 [0] [i_2]) ? (((arr_5 [i_0] [i_0] [i_3] [i_3]) ? var_2 : var_1)) : (~536870880)))) ? (arr_2 [i_0] [i_2 - 1]) : ((((var_10 ? var_6 : (arr_0 [i_2]))) ^ ((var_15 << (var_2 - 3392383242))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
