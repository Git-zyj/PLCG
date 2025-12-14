/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_17 = ((((max(var_6, var_2))) ^ var_7));
                    arr_11 [i_0] [8] [i_2] &= (((((var_15 >> (arr_8 [i_2] [0] [i_2 + 1])))) ? ((var_5 >> (arr_3 [i_2] [4] [i_2 + 1]))) : ((110 ? 1 : -109))));
                    var_18 ^= var_4;
                    var_19 += ((122 ? 13213 : 1));
                    var_20 |= (((var_4 ? (max(var_8, var_3)) : (arr_9 [i_0] [8] [i_2 + 2] [8]))) & (!var_4));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    var_21 = (arr_9 [i_0] [i_1] [i_3] [21]);
                    var_22 = (!1);
                    var_23 = ((((((arr_10 [1] [i_1]) ? 1 : var_5))) && (((var_6 ? var_5 : var_9)))));
                }
                var_24 = (max(var_24, ((max(-2111508198, 1993976325)))));
                var_25 = var_3;
                arr_14 [18] [i_1] &= ((((max((arr_9 [i_0] [12] [i_1] [i_1]), (var_10 + 1)))) ? ((max(var_16, var_1))) : var_4));
                arr_15 [i_0] [i_1] [i_1] = (min((min((arr_13 [i_0] [i_0] [i_0] [i_0]), var_13)), (arr_13 [i_0] [i_1] [i_0] [i_1])));
            }
        }
    }
    var_26 = (min(var_26, (!var_7)));
    var_27 = ((var_12 ? var_1 : (((var_5 != 0) ^ var_0))));
    #pragma endscop
}
