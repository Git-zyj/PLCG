/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((max(var_10, ((var_5 ? var_10 : var_8))))) ? (((var_5 ? var_1 : ((var_9 ? -1 : -30182))))) : (((var_8 ? var_5 : -6)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [1]) : (arr_2 [i_0])))));
        var_15 = ((30185 ? var_13 : ((65535 ? var_0 : (arr_0 [8] [i_0])))));
        var_16 += -9081411136192937358;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 = (((((((((arr_6 [1]) ? 30207 : (arr_6 [i_1])))) - ((-30192 + (arr_4 [i_1])))))) ? ((((arr_4 [7]) ? ((16383 ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (min(var_5, (arr_4 [i_1])))))) : (((4262334646 ? var_10 : var_5)))));
        arr_7 [i_1] = var_0;
        var_18 -= ((!(((var_0 ? (((arr_6 [i_1]) - (arr_5 [i_1]))) : var_13)))));
        var_19 = (min(var_0, -5269253775478161384));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = ((!((((arr_8 [i_2 - 1]) ? (arr_10 [i_2 + 4] [i_2]) : var_4)))));
        var_20 |= ((((((arr_11 [i_2]) ? (arr_10 [i_2 + 2] [2]) : 1))) ? (((var_13 || var_0) & (((-5269253775478161384 >= (arr_10 [i_2] [1])))))) : 21017));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {
                arr_17 [i_3] = ((~(((((var_0 ? var_7 : 21456))) + ((var_4 ? (arr_5 [i_4]) : var_11))))));
                arr_18 [i_3] [i_4] [i_3] = var_1;
                arr_19 [i_3] [i_3] &= (arr_15 [i_4] [i_4]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_21 = ((6903278545465430959 ? (arr_10 [i_4] [i_4]) : (7 | var_10)));
                            var_22 &= (max((max(var_1, ((7387406438100931493 ? -11189 : (arr_9 [i_6]))))), ((var_7 ? ((-31 ? var_13 : 24)) : (!var_12)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
