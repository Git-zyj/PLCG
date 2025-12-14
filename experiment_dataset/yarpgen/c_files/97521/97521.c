/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_10 ? var_2 : var_1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 |= (((~var_2) ? ((var_13 ^ (-14 == 13))) : (arr_5 [22] [i_1 + 1] [i_0 - 1] [22])));
                    var_16 = (!((max(-var_6, var_13))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [0] [i_1] [0] &= ((((((arr_2 [6]) ? (arr_2 [20]) : var_3))) ? (((((min((arr_2 [20]), var_5))) ? (arr_3 [i_0] [i_2] [22]) : (var_10 + var_9)))) : (((arr_1 [i_1 - 2] [i_1 + 3]) + (arr_6 [i_0] [5] [5])))));
                        var_17 = ((((((arr_4 [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0] [i_1] [i_2]) : var_6))) - (((((arr_2 [i_0]) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_0 [i_0]))) + (arr_4 [3] [i_2] [i_3])))));
                        var_18 = ((((min(((((arr_0 [i_0]) <= (arr_8 [i_0] [i_2] [i_0] [i_0] [i_1] [13])))), (((arr_8 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0]) * (arr_1 [i_0] [i_3])))))) ? (arr_4 [i_0 - 1] [i_1 + 1] [i_3 - 1]) : (arr_8 [i_3] [i_3 + 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_19 |= (((arr_10 [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_4] [i_0] [i_4 - 1]) + var_3));
                        arr_12 [i_0] [i_0] [i_0] [i_2] [22] [i_0] = (((arr_6 [i_0 - 1] [i_1 - 1] [i_4 - 1]) != ((var_11 ? (arr_6 [i_0] [i_0] [i_0 - 1]) : (arr_7 [i_0] [i_2])))));
                        var_20 = (arr_7 [i_0 - 1] [i_0 - 1]);
                    }
                }
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
